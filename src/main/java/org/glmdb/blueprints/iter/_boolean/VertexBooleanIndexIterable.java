package org.glmdb.blueprints.iter._boolean;

import com.tinkerpop.blueprints.Vertex;
import org.glmdb.blueprints.ThunderGraph;
import org.glmdb.blueprints.ThunderVertex;
import org.glmdb.blueprints.TransactionAndCursor;
import org.glmdb.blueprints.iter.BaseThunderIterable;
import org.glmdb.blueprints.iter.BaseThunderIterator;
import org.glmdb.blueprints.jni.Cursor;
import org.glmdb.blueprints.jni.DbEnum;

import java.util.Iterator;
import java.util.NoSuchElementException;

/**
 * Date: 2013/11/24
 * Time: 10:22 AM
 */
public class VertexBooleanIndexIterable<T extends Vertex> extends BaseThunderIterable implements Iterable<ThunderVertex> {

    private String key;
    private boolean value;

    public VertexBooleanIndexIterable(ThunderGraph thunderGraph, String key, boolean value) {
        super(thunderGraph);
        this.key = key;
        this.value = value;
    }

    @Override
    public Iterator<ThunderVertex> iterator() {
        return new VertexBooleanIndexIterator();
    }

    private final class VertexBooleanIndexIterator extends BaseThunderIterator<ThunderVertex> implements Iterator {

        private boolean goToFirst = true;

        public VertexBooleanIndexIterator() {
            super(VertexBooleanIndexIterable.this.tc);
        }

        @Override
        protected VertexBooleanIndexIterable getParentIterable() {
            return VertexBooleanIndexIterable.this;
        }

        @Override
        protected DbEnum getDbEnum() {
            return DbEnum.VERTEX_BOOLEAN_INDEX;
        }

        @Override
        public void remove() {
            if (this.cursorIsReadOnly) {
                //Upgrade transaction to a writable one.
                //Replace the current cursor with a new one from the writable transaction
                this.tc = this.getParentIterable().thunderGraph.getWriteTx();
                this.refreshForNext();

                //Check current has not changed, i.e. another thread may have removed the vertex already, throw StaleObjectException or something
                long elementIdArray[] = new long[1];
                if (this.cursor != null && VertexBooleanIndexIterable.this.thunderGraph.getThunder().getCurrentVertexFromVertexBooleanIndexDb(
                        this.cursor, elementIdArray, VertexBooleanIndexIterable.this.key, VertexBooleanIndexIterable.this.value)) {

                    //Check if the current is really the current.
                    //If the current has been removed then current is in fact the next
                    //if it is already next then do nothing, else get the next
                    if (this.internalNext.getInternalId() != elementIdArray[0]) {
                        throw new IllegalStateException("The index has been changed, remove is not possible!");
                    }

                } else {
                    throw new IllegalStateException("The index has been changed, remove is not possible!");
                }
            }
            VertexBooleanIndexIterable.this.thunderGraph.getThunder().removeVertex(this.tc.getTxn(), this.internalNext.getInternalId());

        }

        @Override
        protected ThunderVertex internalNext() {
            long elementIdArray[] = new long[1];
            if (this.goToFirst) {
                this.goToFirst = false;
                //Check if cursor needs reopening. This happens if a read only transaction is upgraded to a write transaction
                //after the iterator was instantiated.
                if (this.cursor == null || !this.cursor.isAllocated()) {
                    refreshForFirst();
                }
                if (this.cursor != null && VertexBooleanIndexIterable.this.thunderGraph.getThunder().getFirstVertexForKeyValueFromBooleanIndex(this.cursor, elementIdArray, VertexBooleanIndexIterable.this.key, VertexBooleanIndexIterable.this.value)) {
                    return new ThunderVertex(VertexBooleanIndexIterable.this.thunderGraph, elementIdArray[0]);
                } else {
                    return null;
                }
            } else {
                if (this.cursor == null || !this.cursor.isAllocated()) {
                    refreshForNext();

                    if (this.cursor != null && VertexBooleanIndexIterable.this.thunderGraph.getThunder().getCurrentVertexFromVertexBooleanIndexDb(
                            this.cursor, elementIdArray, VertexBooleanIndexIterable.this.key, VertexBooleanIndexIterable.this.value)) {

                        //Check if the current is really the current.
                        //If the current has been removed then current is in fact the next
                        //if it is already next then do nothing, else get the next
                        if (this.internalNext.getInternalId() == elementIdArray[0]) {

                            if (this.cursor != null && VertexBooleanIndexIterable.this.thunderGraph.getThunder().getNextVertexForKeyValueFromBooleanIndex(this.cursor, elementIdArray, VertexBooleanIndexIterable.this.key, VertexBooleanIndexIterable.this.value)) {
                                return new ThunderVertex(VertexBooleanIndexIterable.this.thunderGraph, elementIdArray[0]);
                            } else {
                                return null;
                            }

                        } else {

                            return new ThunderVertex(VertexBooleanIndexIterable.this.thunderGraph, elementIdArray[0]);
                        }

                    } else {
                        return null;
                    }
                } else {
                    if (VertexBooleanIndexIterable.this.thunderGraph.getThunder().getNextVertexForKeyValueFromBooleanIndex(this.cursor, elementIdArray, VertexBooleanIndexIterable.this.key, VertexBooleanIndexIterable.this.value)) {
                        return new ThunderVertex(VertexBooleanIndexIterable.this.thunderGraph, elementIdArray[0]);
                    } else {
                        return null;
                    }
                }
            }
        }

        @Override
        protected void refreshForNext() {
            this.tc = VertexBooleanIndexIterable.this.thunderGraph.getReadOnlyTx();

            if (this.tc.hasAvailableCursors(this.getDbEnum())) {
                this.cursor = this.tc.getAndRemoveAvailableCursor(this.getDbEnum());
            } else {
                this.cursor = VertexBooleanIndexIterable.this.thunderGraph.getThunder().openAndPositionCursorOnKeyValueInVertexBooleanIndexDb(
                        this.tc.getTxn(),
                        this.internalNext.getInternalId(),
                        VertexBooleanIndexIterable.this.key,
                        VertexBooleanIndexIterable.this.value
                );
            }
            if (this.cursor != null) {
                this.tc.addOpenCursor(this.cursor);
                this.cursorIsReadOnly = this.tc.isReadOnly();
            } else {
                this.cursorIsReadOnly = true;
            }
        }

    }

}
