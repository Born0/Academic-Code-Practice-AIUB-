#include <iostream>
//#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>

using namespace std;
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4.0);



	glBegin(GL_QUADS); //FOOTPATH partition
	glColor3f(0, 255, 0);
	glVertex2i(0, 370);
	glVertex2i(1200, 370);
	glVertex2i(1200, 420);
	glVertex2i(0, 420);
	glEnd();

	glBegin(GL_QUADS); //ROAD partition
	glColor3f(0, 0, 0);
	glVertex2i(0, 220);
	glVertex2i(1200, 220);
	glVertex2i(1200, 370);
	glVertex2i(0, 370);
	glEnd();

	//car start1
	//lower quad
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex2i(100, 250);
	glVertex2i(100, 300);
	glVertex2i(300, 300);
	glVertex2i(300, 250);
	glEnd();

	//upper quad
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex2i(130, 300);
	glVertex2i(130, 340);
	glVertex2i(270, 340);
	glVertex2i(270, 300);
	glEnd();

	//middle line

	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex2i(195, 300);
	glVertex2i(195, 340);
	glVertex2i(205, 340);
	glVertex2i(205, 300);
	glEnd();
	//middle left quad
	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex2i(150, 300);
	glVertex2i(150, 330);
	glVertex2i(190, 330);
	glVertex2i(190, 300);
	glEnd();

	//middle right quad
	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex2i(220, 300);
	glVertex2i(220, 330);
	glVertex2i(260, 330);
	glVertex2i(260, 300);
	glEnd();
	///end of first car


	//start of 2nd car
	//lower
	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex2i(450, 250);
	glVertex2i(450, 300);
	glVertex2i(700, 300);
	glVertex2i(700, 250);
	glEnd();


	//upper
	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex2i(500, 300);
	glVertex2i(500, 340);
	glVertex2i(650, 340);
	glVertex2i(650, 300);
	glEnd();






	glFlush();
}


void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1200.0, 0.0, 750.0);
}



int main(int argc, char **argv)
{


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("Natural View Of A Village");     // creating the window
	//glutFullScreen();       // making the window full screen
	//glutInitWindowPosition(0,0);
	glutDisplayFunc(myDisplay);

	myInit();
	glutMainLoop();
	return 0;
}
