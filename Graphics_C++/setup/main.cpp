#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<cmath>

void roof()
{
    glLineWidth(2.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(336,570);
    glVertex2i(365,530);
    glVertex2i(900,530);
    glVertex2i(854,570);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(336,570);
    glVertex2i(854,570);
    glEnd();
    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(365,530);
    glVertex2i(400,480);
    glVertex2i(938,480);
    glVertex2i(890,530);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(365,530);
    glVertex2i(900,530);
    glEnd();
    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(400,480);
    glVertex2i(436,427);
    glVertex2i(982,427);
    glVertex2i(927,480);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(400,480);
    glVertex2i(938,480);
    glEnd();
    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(436,427);
    glVertex2i(464,390);
    glVertex2i(1010,390);
    glVertex2i(972,427);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(436,427);
    glVertex2i(982,427);
    glEnd();

    glColor3ub(114,69,34); //triangle
    glBegin(GL_QUADS);
    glVertex2i(202,378);
    glVertex2i(334,550);
    glVertex2i(336,570);
    glVertex2i(190,378);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(202,378);
    glVertex2i(334,550);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(334,550);
    glVertex2i(336,570);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(336,570);
    glVertex2i(190,378);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(202,378);
    glVertex2i(190,378);
    glEnd();

    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(334,550);
    glVertex2i(452,376);
    glVertex2i(464,390);
    glVertex2i(336,570);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(334,550);
    glVertex2i(452,376);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(452,376);
    glVertex2i(464,390);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(464,390);
    glVertex2i(336,570);
    glEnd();

    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(452,376);
    glVertex2i(1010,376);
    glVertex2i(1010,390);
    glVertex2i(464,390);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(452,376);
    glVertex2i(1010,376);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(1010,376);
    glVertex2i(1010,390);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(1010,390);
    glVertex2i(464,390);
    glEnd();

    glColor3ub(0,0,0);//Base line
    glBegin(GL_LINE_STRIP);
    glVertex2i(1010,390);
    glVertex2i(972,427);
    glVertex2i(982,427);
    glVertex2i(927,480);
    glVertex2i(938,480);
    glVertex2i(890,530);
    glVertex2i(900,530);
    glVertex2i(854,570);
    glEnd();
}

void leftwall()
{
    glColor3ub (170, 140, 87);
    glBegin(GL_POLYGON);
    glVertex2i(347,530);
    glVertex2i(233,378);
    glVertex2i(233,360);
    glVertex2i(445,360);
    glVertex2i(452,376);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(445,360);
    glVertex2i(445,65);
    glVertex2i(461,65);
    glVertex2i(461,376);
    glVertex2i(452,376);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(322,493);
    glVertex2i(370,493);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(286,446);
    glVertex2i(403,446);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(244,392);
    glVertex2i(440,392);
    glEnd();
glBegin(GL_LINES);
    glVertex2i(445,360);
    glVertex2i(445,65);
    glEnd();


    glColor3ub(0,0,0);//left roof shade
    glBegin(GL_QUADS);
    glVertex2i(202,378);
    glVertex2i(233,378);
    glVertex2i(347,530);
    glVertex2i(334,550);
    glEnd();

    glColor3ub(114,69,34);//door shade
    glBegin(GL_QUADS);
    glVertex2i(158,323);
    glVertex2i(380,323);
    glVertex2i(445,360);
    glVertex2i(233,360);
    glEnd();
    glColor3ub(114,69,34);
    glBegin(GL_QUADS);
    glVertex2i(158,310);
    glVertex2i(445,310);
    glVertex2i(445,323);
    glVertex2i(158,323);
    glEnd();

    glColor3ub(114,69,34);
    glBegin(GL_TRIANGLES);
    glVertex2i(380,323);
    glVertex2i(445,323);
    glVertex2i(445,360);
    glEnd();

    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(158,323);
    glVertex2i(445,323);
    glEnd();
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(158,312);
    glVertex2i(445,312);
    glEnd();

glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(380,311);
    glVertex2i(380,323);
    glEnd();
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(445,360);
    glVertex2i(380,323);
    glEnd();

    ////////////////////////////////////////

    glColor3ub (170, 140, 87); //main wall frame
    glBegin(GL_QUADS);
    glVertex2i(233,126);
    glVertex2i(445,126);
    glVertex2i(445,311);
    glVertex2i(233,310);
    glEnd();




    glBegin(GL_QUADS);//stair
    glVertex2i(115,98);
    glVertex2i(321,98);
    glVertex2i(321,126);
    glVertex2i(115,126);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(72,65);
    glVertex2i(277,65);
    glVertex2i(277,98);
    glVertex2i(72,98);
    glEnd();

    glColor3ub (193,187,182);
    glBegin(GL_QUADS);
    glVertex2i(36,31);
    glVertex2i(256,31);
    glVertex2i(256,65);
    glVertex2i(36,65);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(226,0);
    glVertex2i(225,33);
    glVertex2i(0,33);
    glEnd();
    glColor3ub (0,0,0);
    glBegin(GL_LINES);
    glVertex2i(233,281);
    glVertex2i(445,281);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(233,216);
    glVertex2i(445,216);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(233,151);
    glVertex2i(273,151);
    glEnd();

    glColor3ub (110, 86, 66);//door
    glBegin(GL_POLYGON);
    glVertex2i(342,191);
    glVertex2i(360,191);
    glVertex2i(360,300);
    glVertex2i(273,300);
    glVertex2i(273,126);
    glVertex2i(342,126);
    glEnd();


    glColor3ub (0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(202,378);
    glVertex2i(233,376);
    glVertex2i(347,530);
    glVertex2i(334,550);
    glEnd();


    glBegin(GL_QUADS);
    glVertex2i(273,126);
    glVertex2i(289,126);
    glVertex2i(289,300);
    glVertex2i(273,300);
    glEnd();

    glColor3ub(114,69,34);
    glBegin(GL_POLYGON);
    glVertex2i(321,98);
    glVertex2i(277,98);
    glVertex2i(277,65);
    glVertex2i(445,65);
    glVertex2i(445,126);
    glVertex2i(321,126);
    glEnd();

    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(445,126);
    glVertex2i(115,126);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(445,65);
    glVertex2i(36,65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(321,98);
    glVertex2i(72,98);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(225,31);
    glVertex2i(0,31);
    glEnd();
    ////////////START WORKING FROM HERE, MAKE A QUAD ON LEFT OF R PEELIER

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(342,191);
    glVertex2i(342,127);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(342,191);
    glVertex2i(445,191);
    glEnd();

    glColor3ub (170, 140, 87);
    glBegin(GL_QUADS);
    glVertex2i(142,191);
    glVertex2i(142,127);
    glVertex2i(233,127);
    glVertex2i(233,191);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(233,308);
    glVertex2i(233,127);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(233,191);
    glVertex2i(142,191);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(142,127);
    glVertex2i(142,191);
    glEnd();


    glColor3ub(210, 194, 185);//L pillar
    glBegin(GL_QUADS);
    glVertex2i(176,127);
    glVertex2i(191,127);
    glVertex2i(191,311);
    glVertex2i(176,311);
    glEnd();

    glColor3ub(210, 194, 185);//R pillar
    glBegin(GL_QUADS);
    glVertex2i(360,311);
    glVertex2i(360,127);
    glVertex2i(375,127);
    glVertex2i(375,311);
    glEnd();

    glColor3ub(0,0,0);//stair line
    glBegin(GL_LINE_STRIP);
    glVertex2i(115,126);
    glVertex2i(115,98);
    glVertex2i(72,98);
    glVertex2i(72,65);
    glVertex2i(36,65);
    glVertex2i(36,32);
    glEnd();
    glColor3ub(0,0,0);//stair line
    glBegin(GL_LINE_STRIP);
    glVertex2i(321,126);
    glVertex2i(321,98);
    glVertex2i(277,98);
    glVertex2i(277,65);
    glVertex2i(257,65);
    glVertex2i(257,32);
    glEnd();

}

void frontWall()
{
    glColor3ub (170, 140, 87);
    glBegin(GL_QUADS);
    glVertex2i(461,360);
    glVertex2i(461,110);
    glVertex2i(984,110);
    glVertex2i(984,360);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(461,376);
    glVertex2i(461,360);
    glVertex2i(984,360);
    glVertex2i(984,376);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(461,110);
    glVertex2i(461,100);
    glVertex2i(975,100);
    glVertex2i(975,110);
    glEnd();
    glColor3ub(170, 140, 87);
    glBegin(GL_QUADS);
    glVertex2i(461,100);
    glVertex2i(461,65);
    glVertex2i(975,65);
    glVertex2i(975,100);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(461,376);
    glVertex2i(461,65);
    glEnd();
    glColor3ub(0,0,0);//wall boarder
    glBegin(GL_LINES);
    glVertex2i(984,376);
    glVertex2i(984,110);
    glEnd();
    glColor3ub(0,0,0);//wall line
    glBegin(GL_LINES);
    glVertex2i(461,161);
    glVertex2i(984,161);
    glEnd();
    glColor3ub(0,0,0);//wall line
    glBegin(GL_LINES);
    glVertex2i(461,240);
    glVertex2i(984,240);
    glEnd();
    glColor3ub(0,0,0);//wall line
    glBegin(GL_LINES);
    glVertex2i(461,306);
    glVertex2i(984,306);
    glEnd();

    glColor3ub(210, 194, 185);// left window
    glBegin(GL_QUADS);
    glVertex2i(533,334);
    glVertex2i(533,180);
    glVertex2i(629,180);
    glVertex2i(629,334);
    glEnd();
    glColor3ub(255,248,107);// left window yellow
    glBegin(GL_QUADS);
    glVertex2i(546,319);
    glVertex2i(546,272);
    glVertex2i(618,272);
    glVertex2i(618,319);
    glEnd();
    glColor3ub(0,0,0);// left window dark
    glBegin(GL_QUADS);
    glVertex2i(546,272);
    glVertex2i(546,192);
    glVertex2i(618,192);
    glVertex2i(618,272);
    glEnd();



    glColor3ub(210, 194, 185);// right window
    glBegin(GL_QUADS);
    glVertex2i(793,334);
    glVertex2i(793,180);
    glVertex2i(888,180);
    glVertex2i(888,334);
    glEnd();
    glColor3ub(255,248,107);// right window yellow
    glBegin(GL_QUADS);
    glVertex2i(805,319);
    glVertex2i(805,272);
    glVertex2i(877,272);
    glVertex2i(877,319);
    glEnd();
    glColor3ub(0,0,0);// right window dark
    glBegin(GL_QUADS);
    glVertex2i(805,272);
    glVertex2i(805,192);
    glVertex2i(877,192);
    glVertex2i(877,272);
    glEnd();

    glColor3ub(0,0,0);//wall line Y
    glBegin(GL_LINES);
    glVertex2i(533,100);
    glVertex2i(533,65);
    glEnd();
    glColor3ub(0,0,0);//wall line Y
    glBegin(GL_LINES);
    glVertex2i(693,100);
    glVertex2i(693,65);
    glEnd();
    glColor3ub(0,0,0);//wall line Y
    glBegin(GL_LINES);
    glVertex2i(867,100);
    glVertex2i(867,65);
    glEnd();

    glColor3ub(0,0,0);//wall line X
    glBegin(GL_LINES);
    glVertex2i(445,65);
    glVertex2i(975,65);
    glEnd();

    glColor3ub(193, 187, 182);//Base
    glBegin(GL_POLYGON);
    glVertex2i(257,31);
    glVertex2i(225,31);
    glVertex2i(225,0);
    glVertex2i(975,0);
    glVertex2i(975,65);
    glVertex2i(257,65);
    glEnd();

    glColor3ub(0,0,0);//Base line
    glBegin(GL_LINE_STRIP);
    glVertex2i(257,65);
    glVertex2i(257,31);
    glVertex2i(225,31);
    glVertex2i(225,0);
    glVertex2i(975,0);
    glVertex2i(975,65);
    glEnd();

    glColor3ub(0,0,0);//wall Line
    glBegin(GL_LINES);
    glVertex2i(975,110);
    glVertex2i(975,65);
    glEnd();
}



void display()
{
    roof();
    leftwall();
    frontWall();
	glFlush();
}

void myInit(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1050.0, 0.0, 600.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1050, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("House");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();

}
