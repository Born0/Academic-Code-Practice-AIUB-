#include <windows.h>  
#include <GL/glut.h>  



void display() {
	glClearColor(0.0f, 1.0f, 255.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS); //FACE
	glColor3f(1.0f, 1.0, 0.6);
	glVertex2f(.1f, .5f);
	glVertex2f(.45f, .5f);
	glVertex2f(.45f, .9f);
	glVertex2f(.1f, .9f);
	glEnd();

	//HAIR

	glBegin(GL_QUADS); //h1
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(.0f, .8f);
	glVertex2f(.2f, .8f);
	glVertex2f(.2f, 1.0f);
	glVertex2f(.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);//h2
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(.2f, .8f);
	glVertex2f(.4f, .8f);
	glVertex2f(.4f, .9f);
	glVertex2f(.2f, .9f);
	glEnd();

	glBegin(GL_QUADS);//h3
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(.4f, .6f);
	glVertex2f(.5f, .6f);
	glVertex2f(.5f, .9f);
	glVertex2f(.4f, .9f);
	glEnd();

	glBegin(GL_QUADS);//h4
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(.3f, .55f);
	glVertex2f(.35f, .55f);
	glVertex2f(.35f, .9f);
	glVertex2f(.3f, .9f);
	glEnd();

	//glasses

	glBegin(GL_QUADS); //g1
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(.0f, .65f);
	glVertex2f(.1f, .65f);
	glVertex2f(.1f, .75f);
	glVertex2f(.0f, .75f);
	glEnd();
	glTranslatef(0.15, -.0, 0);





	glBegin(GL_QUADS);//g2
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(.0f, .65f);
	glVertex2f(.1f, .65f);
	glVertex2f(.1f, .75f);
	glVertex2f(.0f, .75f);
	glEnd();

	glTranslatef(0, 0, 0);



	glBegin(GL_QUADS);//g3
	glColor3f(0.0f, 0.0, 0.0);
	glVertex2f(-.1f, .69f);
	glVertex2f(.1f, .69f);
	glVertex2f(.1f, .75f);
	glVertex2f(-.1f, .75f);
	glEnd();
	glTranslated(.0f, .0f, .0f);


	//neck
	glBegin(GL_QUADS); //n1
	glColor3f(1.0f, 1.0, 0.6);
	glVertex2f(.1f, .4f);
	glVertex2f(.35f, .4f);
	glVertex2f(.35f, .7f);
	glVertex2f(.1f, .7f);
	glEnd();

	glBegin(GL_QUADS);//n2
	glColor3f(1.0f, 1.0, 1.0);
	glVertex2f(.1f, .2f);
	glVertex2f(.35f, .2f);
	glVertex2f(.35f, .4f);
	glVertex2f(.1f, .4f);
	glEnd();

	//shirt
	glBegin(GL_QUADS);//s1
	glColor3f(.0f, .0, .0);
	glVertex2f(-.1f, -.3f);
	glVertex2f(.2f, -.3f);
	glVertex2f(.2f, .4f);
	glVertex2f(-.1f, .4f);
	glEnd();

	glBegin(GL_QUADS);//s2
	glColor3f(.0f, .0, .0);
	glVertex2f(.3f, -.3f);
	glVertex2f(.6f, -.3f);
	glVertex2f(.6f, .4f);
	glVertex2f(.3f, .4f);
	glEnd();

	glBegin(GL_QUADS);//s3
	glColor3f(.10f, .10, .10);
	glVertex2f(.2f, -.3f);
	glVertex2f(.3f, -.3f);
	glVertex2f(.3f, .2f);
	glVertex2f(.2f, .2f);
	glEnd();

	//hand
	glBegin(GL_QUADS);//hand 1
	glColor3f(.0f, .0, .0);
	glVertex2f(-.1f, -.5f);
	glVertex2f(.0f, -.5f);
	glVertex2f(.0f, .2f);
	glVertex2f(-.1f, .2f);
	glEnd();

	glBegin(GL_QUADS);//hand 2
	glColor3f(1.0f, 1.0, 0.6);
	glVertex2f(-.1f, -.6f);
	glVertex2f(.0f, -.6f);
	glVertex2f(.0f, -.5f);
	glVertex2f(-.1f, -.5f);
	glEnd();

	glBegin(GL_QUADS);//hand 3
	glColor3f(.0f, .0, .0);
	glVertex2f(.5f, -.5f);
	glVertex2f(.6f, -.5f);
	glVertex2f(.6f, .4f);
	glVertex2f(.5f, .4f);
	glEnd();

	glBegin(GL_QUADS);//hand
	glColor3f(1.0f, 1.0, 0.6);
	glVertex2f(.5f, -.6f);
	glVertex2f(.6f, -.6f);
	glVertex2f(.6f, -.5f);
	glVertex2f(.5f, -.5f);
	glEnd();



	//pant
	glBegin(GL_QUADS);//p1
	glColor3f(.0f, .36, .90);
	glVertex2f(.0f, -.3f);
	glVertex2f(.5f, -.3f);
	glVertex2f(.5f, -.45f);
	glVertex2f(.0f, -.45f);
	glEnd();


	glBegin(GL_QUADS);//p2
	glColor3f(.0f, .36, .90);
	glVertex2f(.0f, -.8f);
	glVertex2f(.1f, -.8f);
	glVertex2f(.1f, -.3f);
	glVertex2f(.0f, -.3f);
	glEnd();

	glBegin(GL_QUADS);//p3
	glColor3f(.0f, .36, .90);
	glVertex2f(.4f, -.8f);
	glVertex2f(.5f, -.8f);
	glVertex2f(.5f, -.3f);
	glVertex2f(.4f, -.3f);
	glEnd();

	//shoe
	glBegin(GL_QUADS);//shoe1
	glColor3f(.0f, .0, .0);
	glVertex2f(.4f, -.9f);
	glVertex2f(.5f, -.9f);
	glVertex2f(.5f, -.8f);
	glVertex2f(.4f, -.8f);
	glEnd();

	glBegin(GL_QUADS);//shoe 2
	glColor3f(.0f, .0, .0);
	glVertex2f(.4f, -.95f);
	glVertex2f(.6f, -.95f);
	glVertex2f(.6f, -.85f);
	glVertex2f(.4f, -.85f);
	glEnd();

	glBegin(GL_QUADS);//shoe3
	glColor3f(.0f, .0, .0);
	glVertex2f(.0f, -.9f);
	glVertex2f(.1f, -.9f);
	glVertex2f(.1f, -.8f);
	glVertex2f(.0f, -.8f);
	glEnd();

	glBegin(GL_QUADS);//shoe4
	glColor3f(.0f, .0, .0);
	glVertex2f(.1f, -.95f);
	glVertex2f(-.1f, -.95f);
	glVertex2f(-.1f, -.85f);
	glVertex2f(.1f, -.85f);
	glEnd();


	glFlush();
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 600);
	//glutInitWindowPosition(300, 350);
	glutCreateWindow("Human Shape");
	glutDisplayFunc(display);
	glutMainLoop();
}