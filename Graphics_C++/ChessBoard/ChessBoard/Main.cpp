#include<iostream>
#include<cstdio>
#include<gl/gl.h>
#include<gl/glut.h>


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(0, 0, 0);
	glPointSize(50.0);

	float x1 = 150, y1 = 50, x2 = 150, y2 = 125, x3 = 225, y3 = 125, x4 = 225, y4 = 50;


	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			glBegin(GL_QUADS);
			glVertex2f(x1, y1);
			glVertex2f(x2, y2);
			glVertex2f(x3, y3);
			glVertex2f(x4, y4);
			glEnd();

			y1 += 150;
			y2 += 150;
			y3 += 150;
			y4 += 150;
		}
		x1 += 150;
		x2 += 150;
		x3 += 150;
		x4 += 150;

		y1 = 50, y2 = 125, y3 = 125, y4 = 50;
	}

	//second loop
	x1 = 225, y1 = 125, x2 = 225, y2 = 200, x3 = 300, y3 = 200, x4 = 300, y4 = 125;


	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			glBegin(GL_QUADS);
			glVertex2f(x1, y1);
			glVertex2f(x2, y2);
			glVertex2f(x3, y3);
			glVertex2f(x4, y4);
			glEnd();

			y1 += 150;
			y2 += 150;
			y3 += 150;
			y4 += 150;
		}
		x1 += 150;
		x2 += 150;
		x3 += 150;
		x4 += 150;

		y1 = 125, y2 = 200, y3 = 200, y4 = 125;
	}






	glBegin(GL_LINE_LOOP);
	glVertex2f(150, 50);
	glVertex2f(750, 50);
	glVertex2f(750, 650);
	glVertex2f(150, 650);
	glEnd();
	glFlush();

}



void myInit(void)
{
	glClearColor(49, 85, 89, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 900.0, 0.0, 900.0);
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Star");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();

}