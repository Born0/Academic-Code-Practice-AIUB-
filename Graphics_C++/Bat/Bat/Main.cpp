#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(1, 1, 0);
	glPointSize(5.0);



	glBegin(GL_QUADS);//1
	glVertex2i(70 * 5, 110 * 5);
	glVertex2i(80 * 5, 110 * 5);
	glVertex2i(80 * 5, 120 * 5);
	glVertex2i(70 * 5, 120 * 5);
	glEnd();


	glBegin(GL_QUADS);//2
	glVertex2i(70 * 5, 120 * 5);
	glVertex2i(50 * 5, 100 * 5);
	glVertex2i(50 * 5, 60 * 5);
	glVertex2i(70 * 5, 40 * 5);
	glEnd();
	
	glBegin(GL_QUADS);//3
	glVertex2i(70 * 5, 30 * 5);
	glVertex2i(74 * 5, 30 * 5);
	glVertex2i(74 * 5, 90 * 5);
	glVertex2i(70 * 5, 90 * 5);
	glEnd();

	glBegin(GL_QUADS);//4
	glVertex2i(74 * 5, 30 * 5);
	glVertex2i(80 * 5, 40 * 5);
	glVertex2i(80 * 5, 100 * 5);
	glVertex2i(74 * 5, 90 * 5);
	glEnd();

	glBegin(GL_QUADS);//5
	glVertex2i(80 * 5, 40 * 5);
	glVertex2i(90 * 5, 40 * 5);
	glVertex2i(90 * 5, 100 * 5);
	glVertex2i(80 * 5, 100 * 5);
	glEnd();

	glBegin(GL_QUADS);//6
	glVertex2i(90 * 5, 34 * 5);
	glVertex2i(96 * 5, 34 * 5);
	glVertex2i(96 * 5, 120 * 5);
	glVertex2i(90 * 5, 120 * 5);
	glEnd();

	glBegin(GL_QUADS);//7
	glVertex2i(96 * 5, 30 * 5);
	glVertex2i(114 * 5, 30 * 5);
	glVertex2i(114 * 5, 110 * 5);
	glVertex2i(96 * 5, 110 * 5);
	glEnd();

	glBegin(GL_QUADS);//8
	glVertex2i(114 * 5, 34 * 5);
	glVertex2i(120 * 5, 34 * 5);
	glVertex2i(120 * 5, 120 * 5);
	glVertex2i(114 * 5, 120 * 5);
	glEnd();

	glBegin(GL_QUADS);//9
	glVertex2i(120 * 5, 40 * 5);
	glVertex2i(130 * 5, 40 * 5);
	glVertex2i(130 * 5, 100 * 5);
	glVertex2i(120 * 5, 100 * 5);
	glEnd();


	glBegin(GL_QUADS);//10
	glVertex2i(130 * 5, 40 * 5);
	glVertex2i(136 * 5, 30 * 5);
	glVertex2i(136 * 5, 90 * 5);
	glVertex2i(130 * 5, 100 * 5);
	glEnd();

	glBegin(GL_QUADS);//11
	glVertex2i(136 * 5, 30 * 5);
	glVertex2i(140 * 5, 30 * 5);
	glVertex2i(140 * 5, 90 * 5);
	glVertex2i(136 * 5, 90 * 5);
	glEnd();

	glBegin(GL_QUADS);//12
	glVertex2i(140 * 5, 40 * 5);
	glVertex2i(160 * 5, 60 * 5);
	glVertex2i(160 * 5, 100 * 5);
	glVertex2i(140 * 5, 120 * 5);
	glEnd();

	glBegin(GL_QUADS);//13
	glVertex2i(130 * 5, 110 * 5);
	glVertex2i(140 * 5, 110 * 5);
	glVertex2i(140 * 5, 120 * 5);
	glVertex2i(130 * 5, 120 * 5);
	glEnd();

	glFlush();
}

void myInit(void)
{
	glClearColor(1, 1, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1000.0, 0.0, 800.0);
}





int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(300, 350);
	glutCreateWindow("BAT LOGO");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
}
