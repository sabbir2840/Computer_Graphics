#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void circle1(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0; i<=50; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void circle4(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0; i<=50; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void circle2(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0; i<=100; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void circle3(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=50; i<=100; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void Alldraw()
{
    glBegin(GL_POLYGON);
    glColor3f( 0,0,0);
    glVertex2f(17,26); glVertex2f(18,28);
    glVertex2f(18,28); glVertex2f(16,28);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0,0,0);
    glVertex2f(17.05,24.5);
    glVertex2f(17.05,26.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 0,0,0);
    glVertex2f(17,33); glVertex2f(18,37);
    glVertex2f(18,37); glVertex2f(16,37);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 0,0,0);
    glVertex2f(14,33.5); glVertex2f(14.5,37);
    glVertex2f(14.5,36.5); glVertex2f(13,36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 0,0,0);
    glVertex2f(20,33.5); glVertex2f(21,36.4);
    glVertex2f(19.5,36.5); glVertex2f(20,36.8);
    glEnd();

}

void Draw()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);

//left ear
    glColor3f(0, 0, 0);
    circle1(2,7,10,30);
    glColor3f(1, 1, 1);
    circle1(1.8,7,10,29.6);

    //right ear
    glColor3f(0, 0, 0);
    circle1(2,7,25,30);
    glColor3f(1, 1, 1);
    circle1(1.8,7,25,29.6);

    //long moch left
    glColor3f(0,0,0);
    circle4(5,3,4,25);
    glColor3f(0.9, 0.9, 0.9);
    circle4(4.8,2.8,4,25);

    glColor3f(0,0,0);
    circle4(5,3,5,23);
    glColor3f(0.9, 0.9, 0.9);
    circle4(4.8,2.8,5,23);

    glColor3f(0,0,0);
    circle4(4,3,6,21);
    glColor3f(0.9, 0.9, 0.9);
    circle4(3.8,2.8,6,21);

    //right long motch
    glColor3f(0,0,0);
    circle4(5,3,31,25);
    glColor3f(0.9, 0.9, 0.9);
    circle4(4.8,2.8,31,25);

    glColor3f(0,0,0);
    circle4(5,3,30,23);
    glColor3f(0.9, 0.9, 0.9);
    circle4(4.8,2.8,30,23);

    glColor3f(0,0,0);
    circle4(4,3,29,21);
    glColor3f(0.9, 0.9, 0.9);
    circle4(3.8,2.8,29,21);

    //head
    glColor3f(0, 0, 0);
    circle2(10,10,17.5,27);
    glColor3f(1, 1, 1);
    circle2(9.8,9.8,17.5,27);

    //leftmotch
    glColor3f(0, 0, 0);
    circle3(2,2,15,25);
    glColor3f(1, 1, 1);
    circle3(1.9,1.9,15,25);
    //rightmotch
    glColor3f(0, 0, 0);
    circle3(2,2,19,25);
    glColor3f(1, 1, 1);
    circle3(1.9,1.9,19,25);

    //lefteye
    glColor3f(0, 0, 0);
    circle2(1.8,1.95,14,28.5);
    glColor3f(1, 1, 1);
    circle2(.3,.3,14,28.5);

    //lefteye
    glColor3f(0, 0, 0);
    circle2(1.8,1.95,20.2,28.5);
    glColor3f(1, 1, 1);
    circle2(.3,.3,20.2,28.5);
    Alldraw();


    glutSwapBuffers();
}

void init(void)
{
    glClearColor(0.9,0.9,0.9,0.9);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,50.0,0.0,50.0);
}
int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Sabbir");
    init();
    glutDisplayFunc(Draw);

    glutMainLoop();
    return 0;
}
