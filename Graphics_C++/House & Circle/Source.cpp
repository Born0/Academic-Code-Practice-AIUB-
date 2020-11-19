#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<cmath>
using namespace std;

void layerCircle();

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(100,0,0);
    glPointSize(5.0);
    layerCircle();
	glFlush();
}

int X1,Y1,R;
void plot(int x,int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x+X1, y+Y1);

    glEnd();
}
void layerCircle()
{
    int X=0;
    int Y=R;
    double P=(5/4)-R;
    while(X<=Y)
    {
        if(P<0)
        {
            X=X+1;
            Y=Y;
            P=P+2*X+1;
        }
        else if(P>0)
        {
            X=X+1;
            Y=Y-1;
            P=P+2*X+1-2*Y;
        }
        plot(X,Y);
        plot(X,-Y);
        plot(-X,Y);
        plot(-X,-Y);
        plot(Y,X);
        plot(-Y,X);
        plot(Y,-X);
        plot(-Y,-X);

    }


}



void myInit(void)
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
}

int main(int argc, char** argv)
{
    cout<<"Enter X Point"<<endl;
    cin>>X1;
    cout<<"Enter Y Point"<<endl;
    cin>>Y1;
    cout<<"Enter Radius"<<endl;
    cin>>R;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Circle");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();

}
