#include "DrawLibLyskov.h"

const double PI = 3.141592653589793;


void animateScene(int value) {

	glutPostRedisplay();

	glutTimerFunc(1000 / 60, animateScene, 1);
}


void SUN(float q, float w) {

	glTranslatef(q, w, 0);

	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(0.5, 0.5, 1);
	glBegin(GL_TRIANGLE_FAN);
	
	for (float a = 0; a < 5 * PI; a += PI / 8) {

		glVertex2f(cos(a), sin(a));

	}

	glEnd();
	glPopMatrix();

}



void drawCAT(float q, float w) {

	float r, g, b, m;

	r = 0;
	g = 0;
	b = 0;
	m = curTime + 1;

	g = curTime * 0.0001;
	r = 1 * cos(g);
	b = 1 * sin(g);

	glTranslatef(q, w, 0);

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


	//glaza

	glColor3f(1, 0, 1);
	glVertex2f(-0.215, -0.01);
	glVertex2f(-0.195, -0.01);
	glVertex2f(-0.22, 0.03);

	glVertex2f(-0.2, -0.01);
	glVertex2f(-0.185, -0.01);
	glVertex2f(-0.18, 0.03);


	//FluingFlat

	glColor3f(0, 0, 0);
	glVertex2f(-0.25, -0.08);
	glVertex2f(-0.1, -0.08);
	glVertex2f(-0.15, -0.045);

	glColor3f(0, 0, 0);
	glVertex2f(-0.25, -0.08);
	glVertex2f(-0.1, -0.095);
	glVertex2f(-0.15, -0.045);

	glColor3f(0, 0, 0);
	glVertex2f(-0.3, -0.08);
	glVertex2f(-0.2, -0.08);
	glVertex2f(-0.25, -0.045);

	glColor3f(0, 0, 0);
	glVertex2f(-0.3, -0.095);
	glVertex2f(-0.1, -0.08);
	glVertex2f(-0.25, -0.045);

	glColor3f(1, 1, 1);
	glVertex2f(-0.3, -0.13);
	glVertex2f(-0.1, -0.13);
	glVertex2f(-0.2, -0.045);

	glColor3f(1, 1, 1);
	glVertex2f(-0.3, -0.12);
	glVertex2f(-0.1, -0.12);
	glVertex2f(-0.2, -0.045);

	glColor3f(0, 0, b);
	glVertex2f(-0.28, -0.12);
	glVertex2f(-0.12, -0.12);
	glVertex2f(-0.2, -0.047);

	glColor3f(1, 1, 1);
	glVertex2f(-0.26, -0.11);
	glVertex2f(-0.14, -0.11);
	glVertex2f(-0.2, -0.049);

	glColor3f(0, 0, b);
	glVertex2f(-0.24, -0.1);
	glVertex2f(-0.16, -0.1);
	glVertex2f(-0.2, -0.051);


	glEnd();

}


void MatrixCat(float A, float D) {

	glTranslatef(A, D, 0);


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


	//glaza

	glColor3f(1, 0, 1);
	glVertex2f(-0.215, -0.01);
	glVertex2f(-0.195, -0.01);
	glVertex2f(-0.22, 0.03);

	glVertex2f(-0.2, -0.01);
	glVertex2f(-0.185, -0.01);
	glVertex2f(-0.18, 0.03);



	glEnd();



}

void drawCAR(float q, float w) {

	glTranslatef(q, w, 0);


	//CAR

	glBegin(GL_QUADS);

	glColor3f(5, 5, 5);
	glVertex2f(-0.38, -0.85);
	glVertex2f(-0.3, -0.9);
	glVertex2f(-0.55, -0.9);
	glVertex2f(-0.5, -0.85);

	glEnd();

	glBegin(GL_TRIANGLES);

	//Car's elements

	glColor3f(0, 5, 5);
	glVertex2f(-0.38, -0.85);
	glVertex2f(-0.41, -0.85);
	glVertex2f(-0.41, -0.75);

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

	MatrixCat(-0.25, -0.75);


}

void House(float q, float w) {

	glTranslatef(q, w, 0);

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(-0.5, -0.3);
	glVertex2f(-0.2, -0.3);
	glVertex2f(-0.2, -0.9);
	glVertex2f(-0.5, -0.9);

	glColor3f(1, 1, 0);
	glVertex2f(-0.48, -0.32);
	glVertex2f(-0.39, -0.32);
	glVertex2f(-0.39, -0.5);
	glVertex2f(-0.48, -0.5);

	glColor3f(1, 1, 0);
	glVertex2f(-0.48, -0.52);
	glVertex2f(-0.39, -0.52);
	glVertex2f(-0.39, -0.7);
	glVertex2f(-0.48, -0.7);

	glColor3f(1, 1, 0);
	glVertex2f(-0.33, -0.52);
	glVertex2f(-0.24, -0.52);
	glVertex2f(-0.24, -0.7);
	glVertex2f(-0.33, -0.7);

	glColor3f(1, 1, 0);
	glVertex2f(-0.33, -0.32);
	glVertex2f(-0.24, -0.32);
	glVertex2f(-0.24, -0.5);
	glVertex2f(-0.33, -0.5);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.48, -0.72);
	glVertex2f(-0.39, -0.72);
	glVertex2f(-0.39, -0.9);
	glVertex2f(-0.48, -0.9);

	glEnd();


}

void Razmetka(float q, float w) {

	glTranslatef(q, w, 0);

	glBegin(GL_QUADS);
	glColor3f(5, 5, 5);
	glVertex2f(-0.38, -0.88);
	glVertex2f(-0.3, -0.9);
	glVertex2f(-0.55, -0.9);
	glVertex2f(-0.5, -0.88);
	glEnd();


}



void Flag(decor Flagok) {

	glBegin(GL_QUADS);

	glColor3f(5, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(0, 0.15);
	glVertex2f(0.2, 0.15);
	glVertex2f(0.2, 0);
	
	glColor3f(0, 0, 5);
	glVertex2f(0, 0);
	glVertex2f(0, 0.15);
	glVertex2f(0.05, 0.15);
	glVertex2f(0.05, 0);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(0, -0.15);
	glVertex2f(0, 0);
	glVertex2f(0.03, 0);
	glVertex2f(0.03, -0.15);


	glEnd();

}

void Stars(float q, float w) {

	q = 1 + rand() % 5;
	w = 1 + rand() % 5;


	q = q * 0.1;
	w = w * 0.1;

	glTranslatef(q, w, 0);

	float SAS;
	float SUS;

	glBegin(GL_TRIANGLES); 
	
	for (int ess = 0; ess < 10; ess++) {

		SAS = 0.35 * ess;

		glPushMatrix();

		WhitePoint(SAS, 0.9);

		glPopMatrix();

	}

	glEnd();



}

void WhitePoint(float q, float w) {


	glBegin(GL_TRANSFORM_BIT);

	glColor3f(1, 1, 1);
	glVertex2f(0.01, 0.01);
	glVertex2f(0, 0.01);
	glVertex2f(0.01, 0);
	glEnd();


}

void Flag() {

	glBegin(GL_QUADS);

	glColor3f(5, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(0, 0.15);
	glVertex2f(0.2, 0.15);
	glVertex2f(0.2, 0);

	glColor3f(0, 0, 5);
	glVertex2f(0, 0);
	glVertex2f(0, 0.15);
	glVertex2f(0.05, 0.15);
	glVertex2f(0.05, 0);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(0, -0.15);
	glVertex2f(0, 0);
	glVertex2f(0.03, 0);
	glVertex2f(0.03, -0.15);


	glEnd();

}

void drawTree(float q, float w) {

	glTranslatef(q, w, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(0.55, 0.25, 0.1);
	glVertex2f(0, -0.05);
	glVertex2f(-0.02, -0.3);
	glVertex2f(0.02, -0.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(0, -0.05);
	glVertex2f(-0.02, 0.05);
	glVertex2f(0.12, 0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(0, -0.05);
	glVertex2f(0.02, -0.12);
	glVertex2f(0.12, -0.05);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(0, -0.05);
	glVertex2f(-0.02, -0.12);
	glVertex2f(-0.1, -0.03);
	glEnd();

	glPopMatrix();
}