#include "pch.h"
#include "Header.h"

std::vector <Figure> forest;
void drawCircle(float r, float g, float b) {
	glScalef(0.1, 0.1, 0);
	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * 3.14; i += 3.14 / 16) {
		glColor3f(r, g, b);
		glVertex2f(cos(i), sin(i));
	}
	glEnd();
}
void drawEllipse(float r, float g, float b) {
	glPushMatrix();
	glTranslatef(0, 0.8, 0);
	glScalef(0.1, 0.05, 1);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(r, g, b);
	for (float a = 0; a < 2 * 3.14; a += 3.14 / 8) {

		glVertex2f(cos(a), sin(a));

	}

	glEnd();

	glPopMatrix();
}
void drawCloud(float r, float g, float b) {
	glPushMatrix();
	drawEllipse(r, g, b);
	glTranslatef(0, -0.05, 0);
	drawEllipse(r, g, b);
	glTranslatef(0.1, 0, 0);
	drawEllipse(r, g, b);
	glTranslatef(-0.2, 0, 0);
	drawEllipse(r, g, b);
	glPopMatrix();

}
void drawRoad(float r, float g, float b) {
	glBegin(GL_QUADS);
	glColor3f(r, g, b);
	glVertex2f(-1, -0.3);
	glVertex2f(1, -0.3);
	glVertex2f(1, -0.6);
	glVertex2f(-1, -0.6);

	glColor3f(1, 1, 1);
	glVertex2f(-0.95, -0.44);
	glVertex2f(-0.80, -0.44);
	glVertex2f(-0.80, -0.46);
	glVertex2f(-0.95, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(-0.7, -0.44);
	glVertex2f(-0.55, -0.44);
	glVertex2f(-0.55, -0.46);
	glVertex2f(-0.7, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(-0.45, -0.44);
	glVertex2f(-0.3, -0.44);
	glVertex2f(-0.3, -0.46);
	glVertex2f(-0.45, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(-0.2, -0.44);
	glVertex2f(-0.05, -0.44);
	glVertex2f(-0.05, -0.46);
	glVertex2f(-0.2, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(0.05, -0.44);
	glVertex2f(0.20, -0.44);
	glVertex2f(0.20, -0.46);
	glVertex2f(0.05, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(0.45, -0.44);
	glVertex2f(0.3, -0.44);
	glVertex2f(0.3, -0.46);
	glVertex2f(0.45, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(0.55, -0.44);
	glVertex2f(0.70, -0.44);
	glVertex2f(0.70, -0.46);
	glVertex2f(0.55, -0.46);

	glColor3f(1, 1, 1);
	glVertex2f(0.80, -0.44);
	glVertex2f(0.95, -0.44);
	glVertex2f(0.95, -0.46);
	glVertex2f(0.80, -0.46);

	glEnd();
}
void drawHouse(float r, float g, float b, float r1, float g1, float b1, float r2, float g2, float b2) {
	glBegin(GL_QUADS);
	glColor3f(r, g, b);
	glVertex2f(-1, 0.3);
	glVertex2f(-0.8, 0.3);
	glVertex2f(-0.8, 0);
	glVertex2f(-1, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.4, .2, 0);
	glVertex2f(-0.855, 0.09);
	glVertex2f(-0.805, 0.09);
	glVertex2f(-0.805, 0);
	glVertex2f(-0.855, 0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(r1, g1, b1);
	glVertex2f(-0.975, 0.275);
	glVertex2f(-0.925, 0.275);
	glVertex2f(-0.925, 0.225);
	glVertex2f(-0.975, 0.225);

	glColor3f(r2, g2, b2);
	glVertex2f(-0.875, 0.275);
	glVertex2f(-0.825, 0.275);
	glVertex2f(-0.825, 0.225);
	glVertex2f(-0.875, 0.225);

	glColor3f(r1, g1, b1);
	glVertex2f(-0.975, 0.175);
	glVertex2f(-0.925, 0.175);
	glVertex2f(-0.925, 0.125);
	glVertex2f(-0.975, 0.125);

	glColor3f(r1, g1, b1);
	glVertex2f(-0.875, 0.175);
	glVertex2f(-0.825, 0.175);
	glVertex2f(-0.825, 0.125);
	glVertex2f(-0.875, 0.125);

	glColor3f(r2, g2, b2);
	glVertex2f(-0.975, 0.075);
	glVertex2f(-0.925, 0.075);
	glVertex2f(-0.925, 0.025);
	glVertex2f(-0.975, 0.025);
	glEnd();
}
void drawStar(float r, float g, float b, float x, float y) {
	glTranslatef(x, y, 0);
	glScalef(0.01, 0.005, 0);
	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * 3.14; i += 3.14 / 16) {
		glColor3f(r, g, b);
		glVertex2f(cos(i), sin(i));
	}
	glEnd();
}
void drawHouses(float r1, float g1, float b1, float r2, float g2, float b2) {
	drawHouse(1, 0.3, 0, r1, g1, b1, r2, g2, b2);

	glPushMatrix();
	glScalef(1, 1.2, 0);
	glTranslatef(0.2, 0, 0);
	drawHouse(0.8, 0.35, 0.35, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(1, 1.1, 0);
	glTranslatef(0.4, 0, 0);
	drawHouse(1, 0, 0, r1, g1, b1, r2, g2, b2);
	glPopMatrix();


	glPushMatrix();
	glScalef(1, 0.9, 0);
	glTranslatef(0.6, 0, 0);
	drawHouse(0.9, 0.6, 0.1, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(1, 1, 0);
	glTranslatef(0.8, 0, 0);
	drawHouse(1, 0.3, 0, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(1, 1, 0);
	glTranslatef(1, 0, 0);
	drawHouse(0.5, 0.4, 0.9, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(1, 1.2, 0);
	glTranslatef(1.2, 0, 0);
	drawHouse(1, 0.4, 0.7, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(1, 1.1, 0);
	glTranslatef(1.4, 0, 0);
	drawHouse(1, 1, 0.3, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(1.2, 1, 0);
	glTranslatef(1.5, 0, 0);
	drawHouse(1, 0.6, 0, r1, g1, b1, r2, g2, b2);
	glPopMatrix();

	glPushMatrix();
	glScalef(0.9, 1.1, 0);
	glTranslatef(1.92, 0, 0);
	drawHouse(0.5, 0.5, 0.5, r1, g1, b1, r2, g2, b2);
	glPopMatrix();
}
void drawTree(Figure f) {

	glPushMatrix();
	glScalef(1, 1, 1);
	glTranslatef(f.x, f.y, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(0.55, 0.25, 0.1);
	glVertex2f(0, -0.05);
	glVertex2f(-0.02, -0.3);
	glVertex2f(0.02, -0.3);
	glEnd();

	glPushMatrix();
	glScalef(0.8, 0.8, 0);
	glTranslatef(0, -0.15, 0);
	drawCircle(f.r, f.g, f.b);
	glPopMatrix();

	glPopMatrix();
}
void drawSvetofor(float r, float g, float b, float r1, float g1, float b1, float r2, float g2, float b2) {
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-0.01, 0.25);
	glVertex2f(0.01, 0.25);
	glVertex2f(0.01, 0);
	glVertex2f(-0.01, 0);

	glColor3f(0, 0, 0);
	glVertex2f(-0.04, 0.5);
	glVertex2f(0.04, 0.5);
	glVertex2f(0.04, 0.25);
	glVertex2f(-0.04, 0.25);
	glEnd();

	glPushMatrix();
	glScalef(0.3, 0.3, 0);
	glTranslatef(0, 1, 0);
	drawCircle(r, g, b);
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 0);
	glTranslatef(0, 1.25, 0);
	drawCircle(r1, g1, b1);
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 0);
	glTranslatef(0, 1.5, 0);
	drawCircle(r2, g2, b2);
	glPopMatrix();
}
void drawSvetofor2(float r, float g, float b, float r1, float g1, float b1, float r2, float g2, float b2) {
	glPushMatrix();
	glTranslatef(-0.5, -0.3, 0);
	glScalef(0.6, 0.6, 0);
	glRotatef(60, 0, 1, 0);
	drawSvetofor(r, g, b, r1, g1, b1, r2, g2, b2);
	glPopMatrix();
}
void drawCar(float r, float g, float b) {

	glBegin(GL_QUADS);

	glColor3f(r, g, b);
	glVertex2f(.3, -.6);
	glVertex2f(.4, -.5);
	glVertex2f(.7, -.5);
	glVertex2f(.8, -.6); //крыша машины

	glColor3f(r, g, b);
	glVertex2f(.3, -.6);
	glVertex2f(.05, -.65);
	glVertex2f(.05, -.7);
	glVertex2f(.3, -.7);
	glVertex2f(.3, -.6);
	glVertex2f(.3, -.7);
	glVertex2f(.8, -.7);
	glVertex2f(.8, -.6); //кузов

	glColor3f(1, 1, 1);
	glVertex2f(.32, -.6);
	glVertex2f(.41, -.51);
	glVertex2f(.52, -.51);
	glVertex2f(.52, -.6);

	glVertex2f(.55, -.6);
	glVertex2f(.55, -.51);
	glVertex2f(.67, -.51);
	glVertex2f(.72, -.6); //стёкла


	glVertex2f(.05, -.65);
	glVertex2f(.05, -.67);
	glVertex2f(.07, -.67);
	glVertex2f(.09, -.64); //фара

	glColor3f(0, 0, 0);
	glVertex2f(.465, -.62);
	glVertex2f(.465, -.63);
	glVertex2f(.5, -.63);
	glVertex2f(.5, -.62);

	glVertex2f(.665, -.62);
	glVertex2f(.665, -.63);
	glVertex2f(.7, -.63);
	glVertex2f(.7, -.62); //ручки дверей 

	glEnd();

	glPushMatrix();
	glTranslatef(.2, -.7, 0);
	glScalef(.6, .6, 0);
	drawCircle(0.7, 0.7, 0.7);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(.65, -.7, 0);
	glScalef(.6, .6, 0);
	drawCircle(0.7, 0.7, 0.7);
	glPopMatrix();

}
void drawCar1(float r, float g, float b) {
	glPushMatrix();
	glScalef(0.7, 0.7, 0);
	glTranslatef(1.5, 0.13, 0);
	drawCar(r, g, b);
	glPopMatrix();
}
void drawCar2(float r, float g, float b) {
	glPushMatrix();
	glRotatef(180, 0, 1, 0);
	glScalef(0.7, 0.7, 0);
	glTranslatef(1.5, -0.075, 0);
	drawCar(r, g, b);
	glPopMatrix();
}
void drawForest() {
	glPushMatrix();
	for (int i = 0; i < forest.size(); i++) {
		drawTree(forest[i]);
	}
	glPopMatrix();
}

void initForest() {
	srand(clock());
	Figure f;
	for (int i = 0; i < 50; i++) {
		f.x = .01 * ((rand() % 200)-100);
		f.y = 0.001 * ((rand() % 200)-100)+0.1;
		f.r = 0.01 * (rand() % 10) - .1;
		f.g = 0.1 * (rand() % 10) - .3;
		forest.push_back(f);
	}
}

void animateScene(int value) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, animateScene, 1);
}
