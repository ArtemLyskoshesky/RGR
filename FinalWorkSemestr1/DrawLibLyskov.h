#pragma once
#include "GL/glut.h"
#include "GL/freeglut.h"
#include <windows.h>
#include <iostream>
#include <ctime>
#define _USE_MATH_DEFINES_
#include <cmath>


extern clock_t curTime, startTime;


struct decor {

	float  q, w;

};


void Flag(decor Flagok);
void renderScene(void);
void animateScene(int value);
void drawCAT(float q, float w);
void MatrixCat(float A, float D);
void drawCAR(float q, float w);
void House(float q, float w);
void Razmetka(float q, float w);
void SUN(float q, float w);
void Stars(float q, float w);
void WhitePoint(float q, float w);
void Flag();
void drawTree(float q, float w);