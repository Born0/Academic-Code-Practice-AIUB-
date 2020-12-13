#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
using namespace std;

float _angle1 = 30.0f;
float _angle2=35.0f;
float _angle3=40.0f;
float speed = 0.0f;
float speed1 = 0.0f;
float speed2= 0.0f;
float savedSpeed = 0.0f;
float savedSpeed1 = 0.0f;
float savedSpeed2 = 0.0f;
bool paused = false;
bool paused1 = false;
bool paused2 = false;
void update(int value) {
    if(speed>1)
    {
        //cout<<speed<<endl;
        speed = 0.0f;
    }
	_angle1 += speed;
	if (_angle1 > 360) {
		_angle1 -= 360;
	}
	  if(speed1>1 )
    {
        //cout<<speed<<endl;
        speed1 = 0.3f;
    }
    _angle2 -= speed1;
	if (_angle2 > 360) {
		_angle2 -= 360;
	}

      if(speed2>1 )
    {
        //cout<<speed<<endl;
        speed2 = 0.5f;
    }
    _angle3 += speed2;
	if (_angle3 > 360) {
		_angle3 -= 360;
	}



	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}
void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_LEFT:
          speed+=0.05f;
          update(0);
          break;
      case GLUT_KEY_RIGHT:
          speed-=0.05f;
          update(0);
          break;

    }
    switch (key) {
      case GLUT_KEY_LEFT:
          speed1+=0.1f;
          update(0);
          break;
      case GLUT_KEY_RIGHT:
          speed1-=0.1f;
          update(0);
          break;

    }
    switch (key) {
      case GLUT_KEY_LEFT:
          speed2+=0.07f;
          update(0);
          break;
      case GLUT_KEY_RIGHT:
          speed2-=0.07f;
          update(0);
          break;

    }
}
void keyboard(unsigned char key, int x, int y) {
//find key codes: https://www.cambiaresearch.com/articles/15/javascript-char-codes-key-codes
   switch (key) {
      case 'e':     // ESC key
         exit(0);
         break;
   }
}
void mouse(int button, int state, int x, int y) {
   if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) { // Pause/resume
      paused = !paused;         // Toggle state
      if (paused) {
         savedSpeed = speed;  // Save parameters for restore later
         speed = 0;            // Stop movement

      } else {
         speed = savedSpeed;  // Restore parameters

      }
   }

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) { // Pause/resume
      paused1 = !paused1;         // Toggle state
      if (paused) {
         savedSpeed1 = speed1;  // Save parameters for restore later
         speed1 = 0;            // Stop movement

      } else {
         speed1 = savedSpeed1;  // Restore parameters

      }
   }

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) { // Pause/resume
      paused2 = !paused2;         // Toggle state
      if (paused) {
         savedSpeed2 = speed2;  // Save parameters for restore later
         speed2 = 0;            // Stop movement

      } else {
         speed2 = savedSpeed2;  // Restore parameters

      }
   }
}
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();


    glColor3f(1.0,1.0,1.0);//first
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
    glEnd();

    glPushMatrix();
	glRotatef(_angle1, 0.0, 0.0, 1.0);
	glTranslatef(0.4, 0, 0);
	glColor3f(1.0,1.0,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.06;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();





    glColor3f(1.0,1.0,1.0);//second
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
    glEnd();

    glPushMatrix();
	glRotatef(_angle2, 0.0, 0.0, 1.0);
	glTranslatef(0.6, 0, 0);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();




    glColor3f(1.0,1.0,1.0);//third
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
    glEnd();

    glPushMatrix();
	glRotatef(_angle3, 0.0, 0.0, 1.0);
	glTranslatef(0.8, 0, 0);
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.09;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix(); // sun
        glColor3f(0.81,0.0,0.0);
        glutSolidSphere(.16,50,50);
    glPopMatrix();



	glutSwapBuffers();
}


int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);

	glutCreateWindow("Transformation");


	glutDisplayFunc(drawScene);

	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);

	glutTimerFunc(25, update, 0);

	glutMainLoop();
	return 0;
}
