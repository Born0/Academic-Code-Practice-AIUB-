#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat speed = 0.0f;

GLfloat enPos=0.0f;
GLfloat enSpeed = 0.1f;

GLfloat whPos = 0.0f;
GLfloat whSpeed = 0.0f;

void update(int value)
{

    if(position > 0.7)
        {
            position = 0.7;
        }
    if(position< -0.7)
        {
            position=-0.7;
        }

    if(enPos < -1.4)
        {
            enPos=0.8;
        }
    position += speed;
    speed=0;
    enPos-=enSpeed;
    whPos+=whSpeed;
    if(whPos > 1.5)
    {
        whPos=0.0f;
        whSpeed=0;
    }


	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init()
{
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			whSpeed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{

	switch (key)
	{
        case 'a':
            speed -= 0.1f;
            break;
        case 'd':
        speed += 0.1f;
            break;


    glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

glPushMatrix();//RC
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex2f(-0.2f, -0.4f);
      glVertex2f( -0.2f, -1.0f);
      glVertex2f( 0.2f,  -1.0f);
      glVertex2f(0.2f,  -0.4f);
   glEnd();
   glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(-0.3f,-1.0f);
   glVertex2f(0.3f, -1.0f);
   glVertex2f(0.2f, -0.8f);
   glVertex2f(-0.2f, -0.8f);
   glEnd();

    glPushMatrix();
    glTranslatef(0.0f,whPos, 0.0f);
       glBegin(GL_TRIANGLES);//warHead
       glColor3f(0.0f, 0.0f, 1.0f);
       glVertex2f(-0.2f,-0.4f);
       glVertex2f(0.2f, -0.4f);
       glVertex2f(0.0f, -0.2f);
       glEnd();
    glPopMatrix();

glPopMatrix();

glPushMatrix();//EN
glTranslatef(0.0f, enPos, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f,0.6f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.4f, 0.8f);
   glEnd();
   glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.9f, 0.8f);
   glEnd();
   glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f,0.5f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.2f, 0.5f);
   glEnd();
glPopMatrix();




   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(500, 800);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Rocket Shooting");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
