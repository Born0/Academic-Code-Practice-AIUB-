#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<cmath>
#include<iostream>

using namespace std;

float X1, X2, Y1, Y2;


void display(void)
{
    glColor3f(255,0,0);
	float dify, difx, mVal, x, y, k, Xp, Yp;
	difx = X2 - X1;
	dify = Y2 - Y1;

	if (abs(difx) > abs(dify))
	{
		mVal = abs(difx);
	}
	else
		mVal = abs(dify);

	Xp = difx / mVal;
	Yp = dify / mVal;

	x = X1;
	y = Y1;
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();

	for (int i = 1; i <= mVal; i++)
	{
		x = x + Xp;
		y = y + Yp;

		glBegin(GL_POINTS);
		glVertex2i(x, y);
		//cout << "(" << x << "," << y << ")";
		glEnd();
	}


	glFlush();
}



void myInit(void)
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 300);
}


int main(int argc, char** argv)
{
    cout<<"X1: ";
	cin >> X1;
	cout<<"Y1: ";
	cin >> Y1;
	cout<<"X2: ";
	cin >> X2;
	cout<<"y2: ";
	cin >> Y2;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 300);
	glutInitWindowPosition(300, 350);
	glutCreateWindow("DDA");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
}
