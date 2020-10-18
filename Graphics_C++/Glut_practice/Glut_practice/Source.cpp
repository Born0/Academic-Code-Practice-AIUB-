#include <windows.h> 
#include <GL/glut.h>

void DisplayQuads() {
	glClear(GL_COLOR_BUFFER_BIT);   

	glBegin(GL_QUADS);              
	glColor3f(0.0f, 1.0f, 0.0f); 
	glVertex2f(-0.8f, 0.1f);     
	glVertex2f(-0.2f, 0.1f);     
	glVertex2f(-0.2f, 0.7f);
	glVertex2f(-0.8f, 0.7f);

	glColor3f(0.0f, 1.0f, 0.0f); 
	glVertex2f(-0.7f, -0.6f);
	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.7f, 0.0f);

	glColor3f(0.2f, 0.2f, 0.2f); 
	glVertex2f(-0.9f, -0.7f);
	glColor3f(1.0f, 1.0f, 1.0f); 
	glVertex2f(-0.5f, -0.7f);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, -0.3f);
	glColor3f(1.0f, 1.0f, 1.0f); 
	glVertex2f(-0.9f, -0.3f);
	glEnd();;

	glFlush();  
}

void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
}

void Reshape(GLsizei width, GLsizei height) {
	if (height == 0) height = 1;
	GLfloat aspect = (GLfloat)width / height;
	glViewport(0, 0, height, width);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (width >= height) {
		gluOrtho2D(-1 * aspect, 1 * aspect, -1, 1);
	}
	else {
		gluOrtho2D(-1, 1, -1 / aspect, 1 / aspect);
	}

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Viewport Transform"); // Create a window with the given title
	glutInitWindowSize(640, 480);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(DisplayQuads); // Register display callback handler for window re-paint
	//glutReshapeFunc(Reshape);
	initGL();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}