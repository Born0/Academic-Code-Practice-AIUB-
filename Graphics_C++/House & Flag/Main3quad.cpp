#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<cmath>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(0,0,255);
    glBegin(GL_QUADS);
    glVertex2f(0,80);
    glVertex2f(0,0);
    glVertex2f(1000,0);
    glVertex2f(1000,80);
    glEnd();

    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0,400);
    glVertex2f(0,100);
    glVertex2f(1000,100);
    glVertex2f(1000,400);
    glEnd();

    glColor3ub(0,0,255);
    glBegin(GL_QUADS);
    glVertex2f(0,500);
    glVertex2f(0,420);
    glVertex2f(1000,420);
    glVertex2f(1000,500);
    glEnd();

glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
	glVertex2f(330,360);
	glVertex2f(230, 280);
	glVertex2f(310, 280);
	glEnd();

	    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
	glVertex2f(330,360);
	glVertex2f(360, 280);
	glVertex2f(435, 280);
	glEnd();

	    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
	glVertex2f(435, 280);
	glVertex2f(375, 235);
	glVertex2f(400, 160);
	glEnd();

	    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
	glVertex2f(400, 160);
	glVertex2f(330, 210);
	glVertex2f(270, 160);
	glEnd();
	    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
	glVertex2f(270, 160);
	glVertex2f(290, 235);
    glVertex2f(230, 280);
	glEnd();









	glFlush();
}

void myInit(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1050.0, 0.0, 550.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1050, 550);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Flag");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();

}
