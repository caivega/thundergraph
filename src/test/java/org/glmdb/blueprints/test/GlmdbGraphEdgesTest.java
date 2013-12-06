package org.glmdb.blueprints.test;

import com.tinkerpop.blueprints.Edge;
import com.tinkerpop.blueprints.Vertex;
import org.glmdb.blueprints.ThunderGraph;
import org.junit.Assert;
import org.junit.Test;

/**
 * Date: 2013/11/19
 * Time: 11:24 PM
 */
public class GlmdbGraphEdgesTest extends BaseGlmdbGraphTest {

    @Test
    public void testAddEdge() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Vertex vertexTest1 = thunderGraph.getVertex(0L);
        Assert.assertNotNull(vertexTest1);
        Assert.assertEquals(vertexTest1.getProperty("name"), "vertex1");

        Vertex vertexTest2 = thunderGraph.getVertex(1L);
        Assert.assertNotNull(vertexTest2);
        Assert.assertEquals(vertexTest2.getProperty("name"), "vertex2");

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgeViaVertex() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");

        vertex1.addEdge("testLabel1", vertex2);
        thunderGraph.commit();

        Vertex vertexTest1 = thunderGraph.getVertex(0L);
        Assert.assertNotNull(vertexTest1);
        Assert.assertEquals(vertexTest1.getProperty("name"), "vertex1");

        Vertex vertexTest2 = thunderGraph.getVertex(1L);
        Assert.assertNotNull(vertexTest2);
        Assert.assertEquals(vertexTest2.getProperty("name"), "vertex2");

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddManyEdges() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        for (int i = 0; i < 1000000; i++) {
            Vertex vertex2 = thunderGraph.addVertex(null);
            vertex2.setProperty("name", "vertex2");
            Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
            Assert.assertEquals("testLabel1", edge.getLabel());
        }
        thunderGraph.commit();

        Vertex vertexTest1 = thunderGraph.getVertex(0L);
        Assert.assertNotNull(vertexTest1);
        Assert.assertEquals(vertexTest1.getProperty("name"), "vertex1");

        Vertex vertexTest2 = thunderGraph.getVertex(1L);
        Assert.assertNotNull(vertexTest2);
        Assert.assertEquals(vertexTest2.getProperty("name"), "vertex2");

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());

        thunderGraph.commit();

        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyBoolean() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", true);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals(true, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyShort() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", (short)10);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals((short)10, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyInt() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", 10);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals(10, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyLong() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", 10L);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals(10L, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyFloat() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", 10.101F);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals(10.101F, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyDouble() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", 10.101D);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals(10.101D, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddEdgePropertyChar() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", 'a');
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals('a', edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

    @Test
    public void testAddVertexPropertyByte() {
        ThunderGraph thunderGraph = new ThunderGraph(this.dbPath);
        Vertex vertex1 = thunderGraph.addVertex(null);
        vertex1.setProperty("name", "vertex1");
        Vertex vertex2 = thunderGraph.addVertex(null);
        vertex2.setProperty("name", "vertex2");
        Edge edge = thunderGraph.addEdge(null, vertex1, vertex2, "testLabel1");
        edge.setProperty("testPropertyEdge1", (byte)0x65);
        Assert.assertEquals("testLabel1", edge.getLabel());
        thunderGraph.commit();

        Edge edgeTest = thunderGraph.getEdge(0L);
        Assert.assertNotNull("Edge must not be null!!!", edgeTest);
        Assert.assertEquals("testLabel1", edgeTest.getLabel());
        Assert.assertEquals((byte)0x65, edgeTest.getProperty("testPropertyEdge1"));

        thunderGraph.commit();
        thunderGraph.shutdown();
    }

}
