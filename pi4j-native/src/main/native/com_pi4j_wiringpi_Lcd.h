/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Lcd.h
 *
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 *
 * You should have received a copy of the GNU General Lesser Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/lgpl-3.0.html>.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Lcd */

#ifndef _Included_com_pi4j_wiringpi_Lcd
#define _Included_com_pi4j_wiringpi_Lcd
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdInit
 * Signature: (IIIIIIIIIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Lcd_lcdInit
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdHome
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdHome
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdClear
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdClear
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdDisplay
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdDisplay
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdCursor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdCursor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdCursorBlink
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdCursorBlink
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdPosition
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdPosition
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdCharDef
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdCharDef
  (JNIEnv *, jclass, jint, jint, jbyteArray);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdPutchar
 * Signature: (IB)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdPutchar
  (JNIEnv *, jclass, jint, jbyte);

/*
 * Class:     com_pi4j_wiringpi_Lcd
 * Method:    lcdPuts
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Lcd_lcdPuts
  (JNIEnv *, jclass, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
