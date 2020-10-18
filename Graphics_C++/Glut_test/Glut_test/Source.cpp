#include<iostream>
#include<gl/glut.h>

void myDisplay(void)
{
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(.5, .5);
	glVertex2f(.5, -.5);
	glVertex2f(-.5, -.5);
	glVertex2f(-.5,.5);

	glEnd();
	glFlush();
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("my first attempt");
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
