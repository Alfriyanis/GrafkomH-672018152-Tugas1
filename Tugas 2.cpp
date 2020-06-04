#include <iostream>
#include <GL/freeglut.h>

void objek() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1, 1, 0);		//kuning
	glBegin(GL_POLYGON);
	glVertex2f(220.0, 330.0); 
	glColor3f(1, 0.5, 1);	//pink
	glVertex2f(320.0, 100); 
	glColor3f(1, 0.5, 1);	//pink
	glVertex2f(420.0, 330.0);
	glColor3f(1, 1, 0);		//kuning
	glVertex2f(320.0, 450.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(220.0, 330.0);
	glVertex2f(320.0, 100);
	glVertex2f(420.0, 330.0);
	glVertex2f(320.0, 450.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(220.0, 330.0);
	glVertex2f(420.0, 330.0);
	glEnd();
	
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(320.0, 100);
	glVertex2f(320.0, 450.0);
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
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas 2 672018152");
	glutDisplayFunc(objek);

	myinit();
	glutMainLoop();

	return 0;
}