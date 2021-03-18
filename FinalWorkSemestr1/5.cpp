
#include "DrawLibLyskov.h""

#include "GL/glut.h"
#include "GL/freeglut.h"
#include <windows.h>
#include <iostream>
#include <ctime>
#define _USE_MATH_DEFINES_
#include <cmath>




clock_t curTime, startTime;

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("ARTEEM");
	glutDisplayFunc(renderScene);
	glutTimerFunc(1000 / 60, animateScene, 1);
	startTime = clock();
	glutMainLoop();

	return 0;

}


void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT |
		GL_DEPTH_BUFFER_BIT);

	glPushMatrix();

	curTime = clock();


	float m, r, g, b, x, y, phi;

	r = 0;
	g = 0;
	b = 0;
	m = curTime + 1;

	g = curTime * 0.0001;
	r = 1 * cos(g);
	b = 1 * sin(g);


	glBegin(GL_TRIANGLES);

	//Sky

	glColor3f(0, 0, b);
	glVertex2f(-10, -10);
	glVertex2f(10, -10);
	glVertex2f(0, 10);
	
	glEnd();

	decor Stas;
	Stas.q = 0;
	Stas.w = 0.5;

	decor Gleb;
	Gleb.q = 0.5;
	Gleb.w = 0.5;

	decor Ivan;
	Ivan.q = -0.5;
	Ivan.w = 0.5;

	glPushMatrix();


	float h24;

	if (b < 0.4) {

		h24 = 1;

		if (h24 == 1) {

			glPushMatrix();
			glTranslatef(0, 0.5, 0);
			Stars(Stas.q, Stas.w);
			glPopMatrix();

			glPushMatrix();
			glTranslatef(1, 0.5, 0);
			Stars(Ivan.q, Ivan.w);
			glPopMatrix();

			glPushMatrix();
			glTranslatef(-1,0.5,0);
			Stars(Gleb.q, Gleb.w);
			glPopMatrix();
		}
		
		else {

			h24 = 2;

		}

	}

	glPopMatrix();

	glPushMatrix();
	phi = curTime * 0.0001;
	x = 1 * cos(phi);
	y = 1 * sin(phi);

	glColor3f(b+1, b-0.5, 0);

	SUN(x, y);

	glPopMatrix();


	glBegin(GL_TRIANGLES);

	

	glBegin(GL_TRIANGLES);
	
	//Water

	glColor3f(0, 0, b-0.5);
	glVertex2f(-10, 0);
	glVertex2f(10, 0);
	glVertex2f(0, -10);

	//Sand

	glColor3f(b, b, 0.5);
	glVertex2f(-10, -0.2);
	glVertex2f(10, -0.5);
	glVertex2f(0, -10);

	glEnd();

	float SAS;

	glPushMatrix();

	for (int ess = 0; ess < 10; ess++) {

		SAS = 0.35 * ess;

		glPushMatrix();

		MatrixCat(SAS+0.1, -0.3);
		MatrixCat(SAS, -0.5);

		glPopMatrix();

	}

	glPopMatrix();



	glPushMatrix();

	float TIMEMACHIME;

	TIMEMACHIME = curTime;

	float carX, carY;

	if (TIMEMACHIME < 60000) {

		carX = TIMEMACHIME * 0.0001;
		carY = 0;


		drawCAR(carX, carY);

	}

	else {


		if (TIMEMACHIME > 60000) {

			glPushMatrix();
			carX = -TIMEMACHIME * 0.0001;
			carY = 0.2;
			glRotatef(180, 0, 1, 0);
			drawCAR(-carX - 8, carY);
			glPopMatrix();

		}



	}

	


	glPopMatrix();


	glPopMatrix();

	glPushMatrix();
	drawTree(-0.8, -0.3);
	glPopMatrix();

	glPushMatrix();
	drawTree(-0.9, -0.4);
	glPopMatrix();

	glPushMatrix();
	drawTree(-0.6, -0.4);
	glPopMatrix();


	glPushMatrix();

	glTranslatef(-0.4,-0.3,0);
	Flag();
	glPopMatrix();

	glutSwapBuffers();

}






