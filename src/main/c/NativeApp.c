#include <stdio.h>
#include "com_teamtter_NativeApp.h"

JNIEXPORT jstring JNICALL Java_com_teamtter_NativeApp_sayHello( JNIEnv *env, jobject obj ) {
	jstring value; /* the return value */

	char buf[40]; /* working buffer (really only need 20 ) */

	sprintf ( buf, "%s", "Hello NAR World in C !" );

	value = (*env)->NewStringUTF( env, buf );

	return value;
}