#include<iostream>
#include<cstdio>
#include<gl/gl.h>
#include<gl/glut.h>


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(0, 0, 0);
	glPointSize(.0);

	glBegin(GL_TRIANGLES);
	glVertex2f(400,227);
	glVertex2f(145, 400);
	glVertex2f(645, 400);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(250, 100);
	glVertex2f(400, 227);
	glVertex2f(550, 100);
	glVertex2f(400, 600);
	glEnd();


	
	glFlush();

}



void myInit(void)
{
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 700.0);
}



int main(int argc, char** argv)
{
	 glutInit(&argc, argv);
	 glutInitDisplayMode(GLUT_SINGLE);
	 glutInitWindowSize(800, 700);
	 glutInitWindowPosition(250, 300);
	 glutCreateWindow("Star");
	 glutDisplayFunc(display);
	 myInit();
	 glutMainLoop();

}