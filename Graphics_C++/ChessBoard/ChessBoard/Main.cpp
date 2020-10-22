#include<iostream>
#include<cstdio>
#include<gl/gl.h>
#include<gl/glut.h>


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(0, 0, 0);
	glPointSize(5.0);

	float x1=50, y1=50,x2=100,y2=50,x3=100,y3=100,x4=50,y4=100;
	int blockCount = 0;

	/*glBegin(GL_QUADS);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glVertex2f(x4, y4);
	glEnd();*/

	for (int i = 0; i < 8; i++)
	{
		
		//blockCount++;
		for (int j = 0; j < 8; j++)
		{
			glBegin(GL_QUADS);
			glVertex2f(x1, y1);
			glVertex2f(x2, y2);
			glVertex2f(x3, y3);
			glVertex2f(x4, y4);
			glEnd();

			x1 += 100;
			x2 += 100;
			x3 += 100;
			x4 += 100;

			y1 += 100;
			y2 += 100;
			y3 += 100;
			y4 += 100;
		}
	}



	glFlush();

}



void myInit(void)
{
	glClearColor(1, 1, 1, 0);
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