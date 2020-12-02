    #include <cstdio>
    #include<GL/gl.h>
    #include <GL/glut.h>

    void display()
    {
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (1, 34, 105);
    glPointSize(3.0);
    glBegin(GL_QUADS);
    glVertex2i(0, 460);
    glVertex2i(0, 0);
    glVertex2i(930, 0);
    glVertex2i(930, 460);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(0, 460);
    glVertex2i(0, 230);
    glVertex2i(465, 230);
    glVertex2i(465, 460);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(0, 433);
    glVertex2i(0, 385);
    glVertex2i(103, 385);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(55, 460);
    glVertex2i(190, 390);
    glVertex2i(190, 460);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(270, 460);
    glVertex2i(270, 390);
    glVertex2i(415, 460);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(365, 385);
    glVertex2i(465, 385);
    glVertex2i(465, 435);
    glEnd();

    ////////////LOW

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(0, 307);
    glVertex2i(0, 255);
    glVertex2i(103, 307);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(55, 230);
    glVertex2i(190, 230);
    glVertex2i(190, 300);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(270, 300);
    glVertex2i(270, 230);
    glVertex2i(415, 230);
    glEnd();

    glColor3ub (1, 34, 105);
    glBegin(GL_TRIANGLES);
    glVertex2i(365, 305);
    glVertex2i(465, 255);
    glVertex2i(465, 305);
    glEnd();

    // RED
    glColor3ub (218, 7, 35);
    glBegin(GL_QUADS);
    glVertex2i(0, 460);
    glVertex2i(0, 445);
    glVertex2i(120, 385);
    glVertex2i(155, 385);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(275, 385);
    glVertex2i(310, 385);
    glVertex2i(465, 460);
    glVertex2i(430, 460);
    glEnd();
    //LOW
    glBegin(GL_QUADS);
    glVertex2i(0, 230);
    glVertex2i(35, 230);
    glVertex2i(190, 310);
    glVertex2i(155, 310);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(312, 310);
    glVertex2i(465, 230);
    glVertex2i(465, 247);
    glVertex2i(345, 310);
    glEnd();
    //CROSS
    glBegin(GL_QUADS);
    glVertex2i(0, 370);
    glVertex2i(0, 325);
    glVertex2i(465, 325);
    glVertex2i(465, 370);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(210, 460);
    glVertex2i(210, 230);
    glVertex2i(255, 230);
    glVertex2i(255, 460);
    glEnd();
    //STAR
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(220, 143);
    glVertex2i(180, 160);
    glVertex2i(202, 122);
    glVertex2i(168, 100);
    glVertex2i(208, 96);
    glVertex2i(203, 55);
    glVertex2i(232, 83);
    glVertex2i(262, 55);
    glVertex2i(262, 95);
    glVertex2i(300, 100);
    glVertex2i(265, 122);
    glVertex2i(286, 157);
    glVertex2i(250, 145);
    glVertex2i(233, 183);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(691, 91);
    glVertex2i(672, 98);
    glVertex2i(683, 81);
    glVertex2i(665, 70);
    glVertex2i(686, 67);
    glVertex2i(685, 49);
    glVertex2i(698, 62);
    glVertex2i(712, 48);
    glVertex2i(710, 67);
    glVertex2i(730, 70);
    glVertex2i(712, 80);
    glVertex2i(725, 98);
    glVertex2i(705, 91);
    glVertex2i(698, 110);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(575, 273);
    glVertex2i(556, 280);
    glVertex2i(566, 263);
    glVertex2i(550, 252);
    glVertex2i(570, 250);
    glVertex2i(567, 230);
    glVertex2i(582, 244);
    glVertex2i(596, 230);
    glVertex2i(594, 250);
    glVertex2i(614, 250);
    glVertex2i(597, 263);
    glVertex2i(608, 280);
    glVertex2i(588, 273);
    glVertex2i(582, 292);
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2i(739, 219);
    glVertex2i(726, 217);
    glVertex2i(736, 208);
    glVertex2i(733, 195);
    glVertex2i(744, 202);
    glVertex2i(755, 196);
    glVertex2i(753, 208);
    glVertex2i(763, 217);
    glVertex2i(750, 217);
    glVertex2i(745, 230);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2i(795, 304);
    glVertex2i(776, 310);
    glVertex2i(786, 293);
    glVertex2i(770, 282);
    glVertex2i(790, 281);
    glVertex2i(787, 261);
    glVertex2i(801, 274);
    glVertex2i(815, 261);
    glVertex2i(814, 280);
    glVertex2i(834, 282);
    glVertex2i(817, 293);
    glVertex2i(827, 311);
    glVertex2i(808, 304);
    glVertex2i(802, 323);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2i(690, 398);
    glVertex2i(673, 404);
    glVertex2i(683, 387);
    glVertex2i(665, 376);
    glVertex2i(686, 375);
    glVertex2i(683, 355);
    glVertex2i(698, 370);
    glVertex2i(711, 354);
    glVertex2i(710, 374);
    glVertex2i(730, 376);
    glVertex2i(712, 387);
    glVertex2i(723, 404);
    glVertex2i(705, 398);
    glVertex2i(698, 416);
    glEnd();

    glFlush();

    }



    void myInit (void)
    {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
    }





    int main(int argc, char** argv)
    {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 600);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("FLAG AU");
    glutDisplayFunc(display);
    myInit ();
    glutMainLoop();
    }
