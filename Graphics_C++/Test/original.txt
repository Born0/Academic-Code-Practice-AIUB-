#include <cstdio>
#include<GL/gl.h> 
#include <GL/glut.h>

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(0, 128, 0);
	glPointSize(10.0);

	glBegin(GL_LINES);
	glVertex2i(320, 0);
	glVertex2i(320, 480);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(0, 240);
	glVertex2i(640, 240);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(100, 0);
	glVertex2i(100, 200);
	glVertex2i(200, 0);
	glVertex2i(200, 200);
	glVertex2i(100, 50);
	glVertex2i(200, 50);
	glVertex2i(100, 150);
	glVertex2i(200, 150);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2i(100, 250);
	glVertex2i(200, 250);
	glVertex2i(150, 340);
	glVertex2i(150, 340);
	glVertex2i(100, 440);
	glVertex2i(200, 440);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2i(350, 50);
	glVertex2i(550, 50);
	glVertex2i(450, 150);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2i(450, 250);
	glVertex2i(600, 250);
	glVertex2i(600, 400);
	glVertex2i(450, 400);

	glVertex2i(350, 300);
	glVertex2i(500, 300);
	glVertex2i(500, 440);
	glVertex2i(350, 440);
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
	glutCreateWindow("Display");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
