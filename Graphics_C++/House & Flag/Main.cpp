#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<cmath>

void display()
{
 glColor3ub(181, 169, 153);
    glBegin(GL_QUADS);
    glVertex2f(85,0);
    glVertex2f(1070,0);
    glVertex2f(1070,260);
    glVertex2f(85,260);
    glEnd();

glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,280);
    glVertex2f(1125,280);
    glVertex2f(580,480);
    glEnd();

glColor3ub(181, 169, 153);
     glBegin(GL_TRIANGLES);
    glVertex2f(30,280);
    glVertex2f(590,280);
    glVertex2f(310,380);
    glEnd();

    glColor3ub(48,50,59);
    glBegin(GL_LINES);
    glVertex2f(110,310);
    glVertex2f(500,310);
    glEnd();

    glColor3ub(48,50,59);
    glBegin(GL_LINES);
    glVertex2f(360,400);
    glVertex2f(800,400);
    glEnd();

glColor3ub(221,241,250);
     glBegin(GL_QUADS);
    glVertex2f(150,60);
    glVertex2f(315,60);
    glVertex2f(315,230);
    glVertex2f(150,230);
    glEnd();

    glColor3ub(221,241,250);
     glBegin(GL_QUADS);;
    glVertex2f(385,250);
    glVertex2f(385,15);
    glVertex2f(500,15);
    glVertex2f(500,250);
    glEnd();

    glColor3ub(221,241,250);
     glBegin(GL_QUADS);
    glVertex2f(570,230);
    glVertex2f(570,15);
    glVertex2f(1015,15);
    glVertex2f(1015,230);
    glEnd();



	glFlush();
}

void myInit(void)
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1200.0, 0.0, 500.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1200, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Flag");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();

}
