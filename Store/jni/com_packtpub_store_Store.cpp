#include <jni.h>
#include "com_packtpub_store_Store.h"
#include "Store.h"

static Store gStore;
JNIEXPORT jint JNI_onLoad(JavaVM* pVM, void* reserved){
	gStore.mLength = 0;
	return JNI_VERSION_1_6;
}

JNIEXPORT jint JNICALL Java_com_packtpub_store_Store_getCount
  (JNIEnv *pEnv, jobject pObject)
{
	//pEnv = 0;
	//return pEnv->CallIntMethod(0,0);
	return gStore.mLength;
}
