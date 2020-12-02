#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<cmath>
using namespace std;

int x1,x2,x3,x4,Y1,y2,y3,y4;
int tx,ty;
double q,Q,pi=3.1416;

void displayTR()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(100,0,0);
    glPointSize(3.0);

    glBegin(GL_QUADS);
    glVertex2i(x1,Y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();

    glColor3ub(0,100,0);
    glBegin(GL_QUADS);
    glVertex2i(x1+tx,Y1+ty);
    glVertex2i(x2+tx,y2+ty);
    glVertex2i(x3+tx,y3+ty);
    glVertex2i(x4+tx,y4+ty);
    glEnd();

	glFlush();
}

void displaySC()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(100,0,0);
    glPointSize(3.0);

    glBegin(GL_QUADS);
    glVertex2i(x1,Y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();

     glColor3ub(0,100,0);
    glBegin(GL_QUADS);
    glVertex2i(x1*tx,Y1*ty);
    glVertex2i(x2*tx,y2*ty);
    glVertex2i(x3*tx,y3*ty);
    glVertex2i(x4*tx,y4*ty);
    glEnd();
	glFlush();
}

void displayRT()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(100,0,0);
    glPointSize(3.0);

    glBegin(GL_QUADS);
    glVertex2i(x1,Y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();

    Q=q*(pi/180);
    glColor3ub(0,100,0);
    glBegin(GL_QUADS);
    glVertex2i(x1*cos(Q)-Y1*sin(Q),x1*sin(Q)+Y1*cos(Q));
    glVertex2i(x2*cos(Q)-y2*sin(Q),x2*sin(Q)+y2*cos(Q));
    glVertex2i(x3*cos(Q)-y3*sin(Q),x3*sin(Q)+y3*cos(Q));
    glVertex2i(x4*cos(Q)-y4*sin(Q),x4*sin(Q)+y4*cos(Q));
    glEnd();



	glFlush();


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
    int a;
    cout<<"Enter 1 for translation, 2 for scaling, 3 for rotation"<<endl;
    cin>>a;

    cout<<"Enter p1 Point"<<endl;
    cin>>x1>>Y1;
    cout<<"Enter p2 Point"<<endl;
    cin>>x2>>y2;
    cout<<"Enter p3"<<endl;
    cin>>x3>>y3;
    cout<<"Enter p4"<<endl;
    cin>>x4>>y4;

    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Transformation");
    if (a==1){
        cout<<"Enter factor tx, ty: ";
        cin>>tx>>ty;
        glutDisplayFunc(displayTR);
    }
    if (a==2){
        cout<<"Enter factor tx, ty: ";
        cin>>tx>>ty;
    glutDisplayFunc(displaySC);
    }
    if (a==3){
        cout<<"Enter factor q: ";
        cin>>q;
    glutDisplayFunc(displayRT);
    }

	myInit();
	glutMainLoop();

}
