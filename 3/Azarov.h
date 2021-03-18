#pragma once

#include "pch.h"
#include <glut.h>
#include <cmath>
#include <ctime>
#include <vector>
#include <iostream>





struct Figure {
	float x, y;
	float r, g, b;
};
using std::cout;
using std::cin;
using std::endl;


void animateScene(int value);
void drawCircle(float r, float g, float b);
void drawCloud(float r, float g, float b);
void drawHouse(float r, float g, float b, float r1, float g1, float b1, float r2, float g2, float b2);
void drawStar(float r, float g, float b, float x, float y);
void drawEllipse(float r, float g, float b);
void drawRoad(float r, float g, float b);
void drawTree(Figure f);
void drawHouses(float r1, float g1, float b1, float r2, float g2, float b2);
void drawSvetofor(float r, float g, float b, float r1, float g1, float b1, float r2, float g2, float b2);
void drawSvetofor2(float r, float g, float b, float r1, float g1, float b1, float r2, float g2, float b2);
void drawCar(float r, float g, float b);;
void drawCar1(float r, float g, float b);
void drawCar2(float r, float g, float b);
void drawForest();
void initForest();





