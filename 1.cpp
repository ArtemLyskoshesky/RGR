#include <windows.h>
#include <iostream>
#include "GL/freeglut.h"
#include "math.h"
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void renderScene(void);
void drawCAT();
void drawCAR();
void drawPalma();
void KRUG();
void OBLAKO();

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("ARTEEM");
	glutDisplayFunc(renderScene);
	glutMainLoop();

	return 0;

}





void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);


	 // Korablik
	glColor3f(.5, 5, 5);
	glVertex2f(0.1, -0.1);
	glVertex2f(0, 1);
	glVertex2f(0, -0.5);

	glColor3f(.5, 0.09, 0);
	glVertex2f(0.5, -0.1);
	glVertex2f(0, -0.8);
	glVertex2f(-0.5, -0.1);

	glColor3f(.0, 5, 0);
	glVertex2f(0.5, 0.1);
	glVertex2f(0, 0.1);
	glVertex2f(0, 0.8);

	glColor3f(.0, 0, 1);
	glVertex2f(-0.5, 0.1);
	glVertex2f(0, 0.1);
	glVertex2f(0, 0.8);




	// Palma

	glColor3f(.5, 0.2, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.8, -0.5);
	glVertex2f(-0.7, -0.3);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.5, 0.2);
	glVertex2f(-0.4, 0.2);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.7, 0.2);
	glVertex2f(-0.6, 0.2);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.9, 0.2);
	glVertex2f(-0.8, 0.2);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.8, 0.35);
	glVertex2f(-0.9, 0.25);



	// Ostrov
	glColor3f(.5, 1, 0);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-1, -0.5);
	glVertex2f(-0.7, -0.3);

	// Water

	glColor3f(.0, 0, 5.1);
	glVertex2f(1, -0.5);
	glVertex2f(-10, -0.5);
	glVertex2f(10, -10);

	// Roof

	glColor3f(.5, 0.09, 0);
	glVertex2f(-0.8, -0.4);
	glVertex2f(-1, -0.6);
	glVertex2f(-0.6, -0.6);

	// 0. добавить
	glEnd();

	glBegin(GL_QUADS);
	
	//Earth

	glColor3f(0, 5, 0);
	glVertex2f(-1, -1);
	glVertex2f(-1, -0.9);
	glVertex2f(-1, -0.7);
	glVertex2f(1, -1);

	//House

	glColor3f(5, 0, 0);
	glVertex2f(-0.9, -0.6);
	glVertex2f(-0.9, -0.9);
	glVertex2f(-0.7, -0.9);
	glVertex2f(-0.7, -0.6);

	//Window

	glColor3f(1, 1, 1);
	glVertex2f(-0.71, -0.65);
	glVertex2f(-0.71, -0.8);
	glVertex2f(-0.8, -0.8);
	glVertex2f(-0.8, -0.65);


	//Door

	glColor3f(1, 1, 0.2);
	glVertex2f(-0.89, -0.65);
	glVertex2f(-0.89, -0.9);
	glVertex2f(-0.83, -0.9);
	glVertex2f(-0.83, -0.65);

	//CAR

	glColor3f(5, 5, 5);
	glVertex2f(-0.4, -0.7);
	glVertex2f(-0.3, -0.9);
	glVertex2f(-0.55, -0.9); 
	glVertex2f(-0.5, -0.7);

	glColor3f(0, 5, 5);
	glVertex2f(-0.42, -0.71);
	glVertex2f(-0.4, -0.85);
	glVertex2f(-0.53, -0.85);
	glVertex2f(-0.495, -0.71);

	glEnd();

	glBegin(GL_TRIANGLES);

	//Car's elements

	glColor3f(0, 5, 5);
	glVertex2f(-0.35, -0.85);
	glVertex2f(-0.38, -0.85);
	glVertex2f(-0.41, -0.71);

	glColor3f(5, 1, 0);
	glVertex2f(-0.25, -0.89);
	glVertex2f(-0.34, -0.85); //na mashine
	glVertex2f(-0.25, -0.75);

	glColor3f(5, 1, 2);
	glVertex2f(-0.3, -0.88);
	glVertex2f(-0.34, -0.85); //na mashine
	glVertex2f(-0.3, -0.79);

	glColor3f(0, 0, 0);
	glVertex2f(-0.35, -0.95);
	glVertex2f(-0.39, -0.93); //na mashine
	glVertex2f(-0.35, -0.86);

	glColor3f(0, 0, 0);
	glVertex2f(-0.48, -0.95);
	glVertex2f(-0.52, -0.93); //na mashine
	glVertex2f(-0.48, -0.86);
	

	glEnd();

	//Safe place for creating

	glPushMatrix();


	glTranslatef(0.5, 0, 0);
	drawCAT();

	glTranslatef(0.1, 0, 0);
	drawCAT();

	glTranslatef(-0.2, 0, 0);
	drawCAT();

	glTranslatef(-0.3, 0, 0);
	drawCAT();

	glTranslatef(0.3, 0, 0);
	drawCAR();

	glTranslatef(0.1, -0.8, 0);
	drawPalma();

	glTranslatef(-0.1, -0.8, 0);
	drawPalma();

	// Moon

	glTranslatef(-0.4, 1.8, 0);
    KRUG();

	// OBLAKA

	glTranslatef(-0.3, 0.4, 0);
	OBLAKO();

	glTranslatef(-0.5, 0.3, 0);
	OBLAKO();


	glPopMatrix();

	// 1. изменить параметры функций glVertex2f
	// обратить внимание на то, что мы ЧТО-ТО изменяем в коде и это отражается в том, что мы видим

	// 2. Добавить характеристику вершины - её цвет
	// glColor3f, RGB, 0..1

	// 3. Добавить ещё один треугольник

	// 4. Рисуем всё, что вздумается.

	glutSwapBuffers();
}



void KRUG() {


	glPushMatrix();
	glTranslatef(0.5, 0.5, 0);
	glScalef(0.1, 0.1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 0, 0);
	for (float a = 0; a < 2 * M_PI; a += M_PI / 8) {

		glVertex2f(cos(a), sin(a));

	}

	glEnd();
	glPopMatrix();

}

void OBLAKO() {


	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.1, 0.05, 1);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1, 1, 1);
	for (float a = 0; a < 2 * M_PI; a += M_PI / 8) {

		glVertex2f(cos(a), sin(a));

	}

	glEnd();
	glPopMatrix();

}

void drawCAT() {

	glBegin(GL_TRIANGLES);
	// kit

	glColor3f(.5, 0.8, 0);
	glVertex2f(-0.23, -0.1);
	glVertex2f(-0.21, -0.1);
	glVertex2f(-0.25, -0.03);

	glColor3f(.5, 0.5, 0);
	glVertex2f(-0.23, -0.1);
	glVertex2f(-0.17, -0.1);
	glVertex2f(-0.2, 0.03);

	glColor3f(.5, 0.8, 0);
	glVertex2f(-0.23, -0.03);
	glVertex2f(-0.17, -0.03);
	glVertex2f(-0.2, 0.03);

	glColor3f(.5, 0.8, 0);
	glVertex2f(-0.23, -0.03);
	glVertex2f(-0.17, -0.03);
	glVertex2f(-0.22, 0.06);

	glColor3f(.5, 0.8, 0);
	glVertex2f(-0.23, -0.03);
	glVertex2f(-0.17, -0.03);
	glVertex2f(-0.18, 0.06);

	glColor3f(.0, 0, 5);
	glVertex2f(-0.215, -0.01);
	glVertex2f(-0.195, -0.01);
	glVertex2f(-0.22, 0.03);

	glColor3f(.0, 0, 5);
	glVertex2f(-0.2, -0.01);
	glVertex2f(-0.185, -0.01);
	glVertex2f(-0.18, 0.03);

	glEnd();

}


void drawCAR() {

	//CAR

	glBegin(GL_QUADS);

	glColor3f(5, 5, 5);
	glVertex2f(-0.4, -0.7);
	glVertex2f(-0.3, -0.9);
	glVertex2f(-0.55, -0.9);
	glVertex2f(-0.5, -0.7);

	glColor3f(0, 5, 5);
	glVertex2f(-0.42, -0.71);
	glVertex2f(-0.4, -0.85);
	glVertex2f(-0.53, -0.85);
	glVertex2f(-0.495, -0.71);

	glEnd();

	glBegin(GL_TRIANGLES);

	//Car's elements

	glColor3f(0, 5, 5);
	glVertex2f(-0.35, -0.85);
	glVertex2f(-0.38, -0.85);
	glVertex2f(-0.41, -0.71);

	glColor3f(5, 1, 0);
	glVertex2f(-0.25, -0.89);
	glVertex2f(-0.34, -0.85); //na mashine
	glVertex2f(-0.25, -0.75);

	glColor3f(5, 1, 2);
	glVertex2f(-0.3, -0.88);
	glVertex2f(-0.34, -0.85); //na mashine
	glVertex2f(-0.3, -0.79);

	glColor3f(0, 0, 0);
	glVertex2f(-0.35, -0.95);
	glVertex2f(-0.39, -0.93); //na mashine
	glVertex2f(-0.35, -0.86);

	glColor3f(0, 0, 0);
	glVertex2f(-0.48, -0.95);
	glVertex2f(-0.52, -0.93); //na mashine
	glVertex2f(-0.48, -0.86);


	glEnd();


}

void drawPalma() {

	glBegin(GL_TRIANGLES);

	// Palma

	glColor3f(.5, 0.2, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.8, -0.5);
	glVertex2f(-0.7, -0.3);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.5, 0.2);
	glVertex2f(-0.4, 0.2);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.7, 0.2);
	glVertex2f(-0.6, 0.2);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.9, 0.2);
	glVertex2f(-0.8, 0.2);

	glColor3f(.0, 5, 0);
	glVertex2f(-0.7, 0.4);
	glVertex2f(-0.8, 0.35);
	glVertex2f(-0.9, 0.25);

	glEnd();
}