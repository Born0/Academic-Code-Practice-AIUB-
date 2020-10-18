#include <cstdio>
#include<GL/gl.h> 
#include <GL/glut.h>

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(0, 128, 0);
	glPointSize(10.0);

	glBegin(GL_LINES);
	glVertex2i(100, 50);
	glVertex2i(100, 100);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(150, 50);
	glVertex2i(150, 100);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(100, 75);
	glVertex2i(150, 75);
	glEnd();

	glFlush();
}

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("H");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
