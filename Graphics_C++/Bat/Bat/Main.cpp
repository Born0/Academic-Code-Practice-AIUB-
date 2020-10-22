#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(1, 1, 0);
	glPointSize(5.0);



	glBegin(GL_QUADS);//1
	glVertex2i(70, 110);
	glVertex2i(80, 110);
	glVertex2i(80, 120);
	glVertex2i(70, 120);
	glEnd();


	glBegin(GL_QUADS);//2
	glVertex2i(70, 120);
	glVertex2i(50, 100);
	glVertex2i(50, 60);
	glVertex2i(70, 40);
	glEnd();

	glBegin(GL_QUADS);//3
	glVertex2i(70, 30);
	glVertex2i(74, 30);
	glVertex2i(74, 90);
	glVertex2i(70, 90);
	glEnd();

	glBegin(GL_QUADS);//4
	glVertex2i(74, 30);
	glVertex2i(80, 40);
	glVertex2i(80, 100);
	glVertex2i(74, 90);
	glEnd();

	glBegin(GL_QUADS);//5
	glVertex2i(80, 40);
	glVertex2i(90, 40);
	glVertex2i(90, 100);
	glVertex2i(80, 100);
	glEnd();

	glBegin(GL_QUADS);//6
	glVertex2i(90, 34);
	glVertex2i(96, 34);
	glVertex2i(96, 120);
	glVertex2i(90, 120);
	glEnd();

	glBegin(GL_QUADS);//7
	glVertex2i(96, 30);
	glVertex2i(114, 30);
	glVertex2i(114, 110);
	glVertex2i(96, 110);
	glEnd();

	glBegin(GL_QUADS);//8
	glVertex2i(114, 34);
	glVertex2i(120, 34);
	glVertex2i(120, 120);
	glVertex2i(114, 120);
	glEnd();

	glBegin(GL_QUADS);//9
	glVertex2i(120, 40);
	glVertex2i(130, 40);
	glVertex2i(130, 100);
	glVertex2i(120, 100);
	glEnd();


	glBegin(GL_QUADS);//10
	glVertex2i(130, 40);
	glVertex2i(136, 30);
	glVertex2i(136, 90);
	glVertex2i(130, 100);
	glEnd();

	glBegin(GL_QUADS);//11
	glVertex2i(136, 30);
	glVertex2i(140, 30);
	glVertex2i(140, 90);
	glVertex2i(136, 90);
	glEnd();

	glBegin(GL_QUADS);//12
	glVertex2i(140, 40);
	glVertex2i(160, 60);
	glVertex2i(160, 100);
	glVertex2i(140, 120);
	glEnd();

	glBegin(GL_QUADS);//13
	glVertex2i(130, 110);
	glVertex2i(140, 110);
	glVertex2i(140, 120);
	glVertex2i(130, 110);
	glEnd();

	glFlush();
}

void myInit(void)
{
	glClearColor(1, 1, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(300, 350);
	glutCreateWindow("BAT LOGO");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
}
