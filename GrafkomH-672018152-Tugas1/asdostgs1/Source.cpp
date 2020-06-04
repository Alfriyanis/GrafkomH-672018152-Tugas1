#include <iostream>
#include <GL/freeglut.h>

void matahari(int xp, int yp, int r, int n) {
	float a, x, y;
	glColor4ub(255, 255, 0, 200);
	glBegin(GL_POLYGON);
	a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		r = 25;
		x = 200 + r * cos(i * a);
		y = 400 + r * sin(i * a);
		glVertex2d(x, y);
	}
	glEnd();
}

void tanah(int xp, int yp, int r, int n) {
	float a, x, y;
	glColor4ub(128, 128, 0, 200);
	glBegin(GL_POLYGON);
	a = 445.6 / n;

	for (int i = 0; i < n; i++) {
		r = 200;
		x = 0 + r * cos(i * a);
		y = -60 + r * sin(i * a);
		glVertex2d(x, y);
	}
	glEnd();
}

void objek() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0, 128, 0); //gunung
	glBegin(GL_TRIANGLES);
	glVertex2f(-200, 70.0);glVertex2f(300.0, 70.0);glVertex2f(100.0, 400.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(100, 70.0);glVertex2f(500.0, 70.0);glVertex2f(350.0, 340.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(300, 70.0);glVertex2f(600.0, 70.0);glVertex2f(500.0, 200.0);
	glEnd();

	glColor3f(0, 255, 255); //laut
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0); glVertex2f(720.0, 0); glVertex2f(720.0, 70.0); glVertex2f(0.0, 70.0);
	glEnd();
	
	glColor3f(0.2, 0.2, 0.2); //kapal
	glBegin(GL_TRIANGLES);
	glVertex2f(220.0, 120.0); glVertex2f(300.0, 50.0); glVertex2f(300.0, 120.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(300.0, 120.0); glVertex2f(500.0, 120.0); glVertex2f(500.0, 50.0); glVertex2f(300.0, 50.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(550.0, 120.0); glVertex2f(500.0, 50.0); glVertex2f(500.0, 120.0);
	glEnd();


	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(300.0, 130.0); glVertex2f(520.0, 130.0); glVertex2f(520.0, 120.0); glVertex2f(300.0, 120.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(300.0, 130.0); glVertex2f(520.0, 130.0); glVertex2f(520.0, 120.0); glVertex2f(300.0, 120.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(380.0, 170.0); glVertex2f(510.0, 170.0); glVertex2f(510.0, 130.0); glVertex2f(350.0, 130.0);
	glEnd();

	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2f(450.0, 250.0); glVertex2f(480.0, 250.0); glVertex2f(480.0, 170.0); glVertex2f(450.0, 170.0);
	glEnd();

	glColor3f(0, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(375.0, 160.0); glVertex2f(390.0, 160.0); glVertex2f(390.0, 140.0); glVertex2f(360.0, 140.0); glEnd();

	glBegin(GL_POLYGON); glVertex2f(395.0, 160.0); glVertex2f(430.0, 160.0); glVertex2f(430.0, 140.0); glVertex2f(395.0, 140.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(435.0, 160.0); glVertex2f(450.0, 160.0); glVertex2f(450.0, 140.0);glVertex2f(435.0, 140.0);
	glEnd();

	matahari(0, 0, 100, 255); //matahari
	glColor3f(255, 255, 0);
	glBegin(GL_LINES);
	glVertex2f(140.0, 400.0); glVertex2f(170.0, 400.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(230.0, 400.0); glVertex2f(260.0, 400.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(200.0, 370.0); glVertex2f(200.0, 340.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(200.0, 430.0); glVertex2f(200.0, 460.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(180.0, 420.0); glVertex2f(160.0, 445.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(220.0, 420.0); glVertex2f(240.0, 445.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(180.0, 380.0); glVertex2f(160.0, 360.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(220.0, 380.0); glVertex2f(240.0, 360.0);
	glEnd();


	tanah(0, 0, 100, 255);		//tanah & mercusuar
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 80.0); glVertex2f(120.0, 80.0); glVertex2f(110.0, 120.0); glVertex2f(30.0, 120.0);
	glEnd();

	glColor3f(128, 0, 0);	
	glBegin(GL_POLYGON);
	glVertex2f(40.0, 120.0);
	glColor3f(255, 255, 255);
	glVertex2f(100.0, 120.0);
	glColor3f(128, 0, 0);
	glVertex2f(90.0, 390.0); glVertex2f(50.0, 390.0);
	glEnd();

	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2f(40.0, 360.0); glVertex2f(100.0, 360.0); glVertex2f(100.0, 370.0); glVertex2f(40.0, 370.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(40.0, 390.0); glVertex2f(100.0, 390.0); glVertex2f(80.0, 410.0); glVertex2f(60.0, 410.0);
	glEnd();

	glColor3f(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(55.0, 375.0);glVertex2f(85.0, 375.0);glVertex2f(85.0, 385.0);glVertex2f(55.0, 385.0);
	glEnd();

	glColor3f(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(65.0, 120.0);glVertex2f(75.0, 120.0);glVertex2f(75.0, 140.0);glVertex2f(65.0, 140.0);
	glEnd();

	glColor3f(0.2, 0.2, 0.2); //burung
	glBegin(GL_TRIANGLES);
	glVertex2f(405.0, 460.0); glVertex2f(435.0, 445.0); glVertex2f(430.0, 453.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(427.0, 445.0);glVertex2f(465.0, 460.0);glVertex2f(435.0, 453.0);
	glEnd();

	
	glBegin(GL_TRIANGLES);
	glVertex2f(420.0, 440.0);glVertex2f(445.0, 425.0);glVertex2f(440.0, 433.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(437.0, 425.0);glVertex2f(470.0, 440.0);glVertex2f(445.0, 433.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(375.0, 450.0);glVertex2f(405.0, 435.0);glVertex2f(400.0, 443.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(397.0, 435.0);glVertex2f(435.0, 450.0);glVertex2f(405.0, 443.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(470.0, 450.0);glVertex2f(500.0, 435.0);glVertex2f(495.0, 443.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(492.0, 435.0);glVertex2f(523.0, 450.0);glVertex2f(500.0, 443.0);
	glEnd();


	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 639.0, 0.0, 479.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1080, 720);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("672018152");
	glutDisplayFunc(objek);

	myinit();
	glutMainLoop();

	return 0;
}