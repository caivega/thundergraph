/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_glmdb_blueprints_jni_GlmdbJni */

#ifndef _Included_org_glmdb_blueprints_jni_GlmdbJni
#define _Included_org_glmdb_blueprints_jni_GlmdbJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_init
  (JNIEnv *, jclass);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_strerror
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1strerror
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    printVertexDb
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_printVertexDb
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    printEdgeDb
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_printEdgeDb
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    printVertexPropertyKeyDb
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_printVertexPropertyKeyDb
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    printEdgePropertyKeyDb
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_printEdgePropertyKeyDb
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    glmdb_env_create
 * Signature: (Ljava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_glmdb_1env_1create
  (JNIEnv *, jclass, jstring, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    glmdb_env_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_glmdb_1env_1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_txn_begin
 * Signature: (JJJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1txn_1begin
  (JNIEnv *, jclass, jlong, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_txn_renew
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1txn_1renew
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_txn_commit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1txn_1commit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_txn_reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1txn_1reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_txn_abort
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1txn_1abort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_cursor_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1cursor_1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_cursor_renew
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1cursor_1renew
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_cursor_open_vertex_db
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1cursor_1open_1vertex_1db
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_cursor_open_property_key_db
 * Signature: (JJ[JZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1cursor_1open_1property_1key_1db
  (JNIEnv *, jclass, jlong, jlong, jlongArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_cursor_open_and_position_on_edge_vertex_db
 * Signature: (JJJIIJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1cursor_1open_1and_1position_1on_1edge_1vertex_1db
  (JNIEnv *, jclass, jlong, jlong, jlong, jint, jint, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_cursor_open_edge_db
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1cursor_1open_1edge_1db
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_add_vertex
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1add_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_add_edge
 * Signature: (JJJJI[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1add_1edge
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_boolean
 * Signature: (JJIZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1boolean
  (JNIEnv *, jclass, jlong, jlong, jint, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_byte
 * Signature: (JJIBZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1byte
  (JNIEnv *, jclass, jlong, jlong, jint, jbyte, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_short
 * Signature: (JJISZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1short
  (JNIEnv *, jclass, jlong, jlong, jint, jshort, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_int
 * Signature: (JJIIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1int
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_long
 * Signature: (JJIJZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1long
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_float
 * Signature: (JJIFZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1float
  (JNIEnv *, jclass, jlong, jlong, jint, jfloat, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_double
 * Signature: (JJIDZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1double
  (JNIEnv *, jclass, jlong, jlong, jint, jdouble, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_char
 * Signature: (JJICZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1char
  (JNIEnv *, jclass, jlong, jlong, jint, jchar, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_property_string
 * Signature: (JJJJILjava/lang/String;ZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1property_1string
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jstring, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_property_array
 * Signature: (JJI[[BZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1property_1array
  (JNIEnv *, jclass, jlong, jlong, jint, jobjectArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_del_property
 * Signature: (JJI[[BZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1del_1property
  (JNIEnv *, jclass, jlong, jlong, jint, jobjectArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_property_keys
 * Signature: (JJ[[IZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1property_1keys
  (JNIEnv *, jclass, jlong, jlong, jobjectArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_propertykey
 * Signature: (JJLjava/lang/String;I[IZZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1propertykey
  (JNIEnv *, jclass, jlong, jlong, jstring, jint, jintArray, jboolean, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_property_key
 * Signature: (J[I[I[Z[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1property_1key
  (JNIEnv *, jclass, jlong, jintArray, jintArray, jbooleanArray, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_property_key
 * Signature: (J[I[I[Z[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1property_1key
  (JNIEnv *, jclass, jlong, jintArray, jintArray, jbooleanArray, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_set_label
 * Signature: (JJLjava/lang/String;[I)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1set_1label
  (JNIEnv *, jclass, jlong, jlong, jstring, jintArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_vertex
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_remove_vertex
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1remove_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_vertex
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1vertex
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_vertex
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1vertex
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_vertex_for_key_value
 * Signature: (J[JI[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1vertex_1for_1key_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jbyteArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_vertex_for_key_value
 * Signature: (J[JI[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1vertex_1for_1key_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jbyteArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_edge
 * Signature: (JJ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1edge
  (JNIEnv *, jclass, jlong, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_remove_edge
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1remove_1edge
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_edge
 * Signature: (J[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1edge
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_edge
 * Signature: (J[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1edge
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_edge_for_key_value
 * Signature: (J[J[I[J[JI[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1edge_1for_1key_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jbyteArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_edge_for_key_value
 * Signature: (J[J[I[J[JI[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1edge_1for_1key_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jbyteArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_edge_from_vertex
 * Signature: (JIIJ[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1edge_1from_1vertex
  (JNIEnv *, jclass, jlong, jint, jint, jlong, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_edge_from_vertex
 * Signature: (JIIJ[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1edge_1from_1vertex
  (JNIEnv *, jclass, jlong, jint, jint, jlong, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_first_edge_from_vertex_all_labels
 * Signature: (JIJ[I[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1first_1edge_1from_1vertex_1all_1labels
  (JNIEnv *, jclass, jlong, jint, jlong, jintArray, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_GlmdbJni
 * Method:    mdb_get_next_edge_from_vertex_all_labels
 * Signature: (JIJ[I[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_GlmdbJni_mdb_1get_1next_1edge_1from_1vertex_1all_1labels
  (JNIEnv *, jclass, jlong, jint, jlong, jintArray, jlongArray, jlongArray, jlongArray);

#ifdef __cplusplus
}
#endif
#endif
