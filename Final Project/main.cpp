#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>
float p=0;
void circle5(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=25; i<=50; i++)
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
    for(int i=75; i<=125; i++)
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
    for(int i=0; i<=100; i++)
    {
        float angle = 2.0f * 3.1416f * i/6;
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
        float angle = 2.0f * 3.1416f * i/7;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void circle1(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
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
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=51.4; i<=88; i++)
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


    glClear(GL_COLOR_BUFFER_BIT);

    //yellow color background
    glBegin(GL_POLYGON);
    glColor3f( .5,.8,0); glVertex2f(11,40);
    glVertex2f(44,40);   glVertex2f(44,55);
    glVertex2f(14,55);   glEnd();

    glBegin(GL_POLYGON);
    glColor3f( .5,.8,0); glVertex2f(44,35);
    glVertex2f(68,35);   glVertex2f(68,55);
    glVertex2f(44,55);   glEnd();

    //olive color ground

    glBegin(GL_POLYGON);
    glColor3f( .75,.5,0); glVertex2f(10,25);
    glVertex2f(20,25);    glVertex2f(20,40);
    glVertex2f(12,40);    glEnd();

    //long way
    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(6.5,10);
    glVertex2f(8.5,10);   glVertex2f(16,65);
    glVertex2f(14,65);    glEnd();

    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(69,55);
    glVertex2f(13,55);  glVertex2f(13,53);
    glVertex2f(68,53);  glVertex2f(68,46);
    glVertex2f(69,46);  glEnd();

    //longbuildingway
    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(22,15);
    glVertex2f(23,15); glVertex2f(23,24);
    glVertex2f(22,24); glEnd();

    //mosque way
    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(30,17);
    glVertex2f(31,17); glVertex2f(31,24);
    glVertex2f(30,24); glEnd();

    //innovation lab way
    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(51,20);
    glVertex2f(52,20); glVertex2f(52,23);
    glVertex2f(51,23); glEnd();

    //ab1 building way
    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(44,23);
    glVertex2f(45,23); glVertex2f(45,24);
    glVertex2f(44,24); glEnd();


    // field road
    glBegin(GL_POLYGON);
    glColor3f( 0.5,0.5, .5); glVertex2f(20,24);
    glVertex2f(48,24); glVertex2f(48,36);
    glVertex2f(44,40); glVertex2f(20,40);
    glEnd();

    //filed
    glBegin(GL_POLYGON);
    glColor3f( 0,1, 0); glVertex2f(21,25);
    glVertex2f(47,25); glVertex2f(47,35);
    glVertex2f(44,39); glVertex2f(21,39);
    glEnd();

    //football ground
    glBegin(GL_LINES);
    glColor3f( 1,1,1); glVertex2f(24,26);
    glVertex2f(24,38); glVertex2f(24,38);
    glVertex2f(41,38); glVertex2f(41,38);
    glVertex2f(41,26); glVertex2f(41,26);
    glVertex2f(24,26); glVertex2f(32.5,26);
    glVertex2f(32.5,38); glVertex2f(24,31);
    glVertex2f(25,31); glVertex2f(25,31);
    glVertex2f(25,34); glVertex2f(25,34);
    glVertex2f(24,34); glVertex2f(40,31);
    glVertex2f(41,31); glVertex2f(40,31);
    glVertex2f(40,34); glVertex2f(40,34);
    glVertex2f(41,34); glEnd();

    //basket ball
    glBegin(GL_POLYGON);
    glColor3f( 0,1, 0); glVertex2f(13,23);
    glVertex2f(19,23); glVertex2f(19,27);
    glVertex2f(13,27); glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 1,0, 0); glVertex2f(14,24);
    glVertex2f(18,24); glVertex2f(18,26);
    glVertex2f(14,26); glEnd();

    glBegin(GL_LINES);
    glColor3f( 1,1,1); glVertex2f(16,24);
    glVertex2f(16,26); glEnd();

    //golf court
    glBegin(GL_POLYGON);
    glColor3f( 0,1, 0); glVertex2f(16,48);
    glVertex2f(22,48); glVertex2f(21,52);
    glVertex2f(16,52); glEnd();

    //swimming pool
    glBegin(GL_POLYGON);
    glColor3f( 1,1, 1); glVertex2f(24,40);
    glVertex2f(29,40); glVertex2f(29,48);
    glVertex2f(24,48); glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 0,0, 1); glVertex2f(25,41);
    glVertex2f(28,41); glVertex2f(28,47);
    glVertex2f(25,47); glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 1,1, 1); glVertex2f(23,49);
    glVertex2f(30,49); glVertex2f(30,51);
    glVertex2f(23,51); glEnd();

    glBegin(GL_POLYGON);
    glColor3f( .5,.5,.5); glVertex2f(26,48);
    glVertex2f(27,48); glVertex2f(27,49);
    glVertex2f(26,49); glEnd();

    //swimming pool road
    glBegin(GL_POLYGON);
    glColor3f(0.5,.5,.5); glVertex2f(23,40);
    glVertex2f(24,40); glVertex2f(24,49);
    glVertex2f(23,49); glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5,.5,.5); glVertex2f(16,47);
    glVertex2f(23,47); glVertex2f(23,48);
    glVertex2f(16,48); glEnd();

    //kathaltola
    glBegin(GL_POLYGON);
    glColor3f( 0.5,.5, .5); glVertex2f(30,40);
    glVertex2f(30,44); glVertex2f(35,44);
    glVertex2f(38,40); glEnd();

    glBegin(GL_POLYGON);
    glColor3f( 0,1,0); glVertex2f(31,40);
    glVertex2f(37,40); glVertex2f(34,43);
    glVertex2f(31,43); glEnd();

    //ab4 design
    glBegin(GL_POLYGON);
    glColor3f( 1,1,1); glVertex2f(40,50);
    glVertex2f(31,50); glVertex2f(31,47);
    glVertex2f(42,47); glVertex2f(46,43);
    glVertex2f(48,45); glVertex2f(46,47);
    glVertex2f(47,48);glVertex2f(43,52);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0,0,0); glVertex2f(40,50);
    glVertex2f(44,45); glVertex2f(31,47);
    glVertex2f(42,47); glVertex2f(31,50);
    glVertex2f(40,50); glVertex2f(40,50);
    glVertex2f(43,52); glVertex2f(43,52);
    glVertex2f(47,48); glVertex2f(47,48);
    glVertex2f(44,45); glVertex2f(46,47);
    glVertex2f(48,45); glVertex2f(48,45);
    glVertex2f(46,43); glVertex2f(46,43);
    glVertex2f(44,45); glVertex2f(31,47);
    glVertex2f(31,50); glVertex2f(36,47);
    glVertex2f(36,50); glEnd();


    //bush
    glBegin(GL_POLYGON);
    glColor3f( 0.5,.5, .5); glVertex2f(48,23);
    glVertex2f(69,23); glVertex2f(69,36);
    glVertex2f(48,36); glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,.9,0); glVertex2f(48,24);
    glVertex2f(68,24); glVertex2f(68,35);
    glVertex2f(48,35); glEnd();

    //small field
    glBegin(GL_POLYGON);
    glColor3f(0,.9,0); glVertex2f(48,36);
    glVertex2f(68,36); glVertex2f(68,45);
    glVertex2f(48,45); glEnd();

    //cricket ground
    glBegin(GL_POLYGON);
    glColor3f(0,0,.6); glVertex2f(55,39);
    glVertex2f(61,39); glVertex2f(61,41);
    glVertex2f(55,41); glEnd();

    glBegin(GL_POLYGON);//way
    glColor3f(0.5,.5,0.5); glVertex2f(68,45);
    glVertex2f(68,36); glVertex2f(69,36);
    glVertex2f(69,46); glVertex2f(48,46);
    glVertex2f(48,45); glEnd();

    //auditorium design
    glBegin(GL_POLYGON);
    glColor3f(1,1,1); glVertex2f(70,30);
    glVertex2f(90,30); glVertex2f(90,42);
    glVertex2f(70,42); glEnd();

    glBegin(GL_LINES);
    glColor3f( 0,0,0); glVertex2f(71,41);
    glVertex2f(89,41); glVertex2f(89,41);
    glVertex2f(89,31); glVertex2f(89,31);
    glVertex2f(71,31); glVertex2f(71,36);
    glVertex2f(89,36); glEnd();

    //ab1 building design
    glBegin(GL_POLYGON);
    glColor3f(1,1,1); glVertex2f(43,17);
    glVertex2f(38,17); glVertex2f(38,14);
    glVertex2f(46,14); glVertex2f(46,23);
    glVertex2f(43,23); glEnd();

    //ab1 basket court
    glBegin(GL_POLYGON);
    glColor3f(0,1,0); glVertex2f(35,17.5);
    glVertex2f(37.5,17.5); glVertex2f(37.5,22);
    glVertex2f(35,22); glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0); glVertex2f(35.8,18);
    glVertex2f(36.7,18); glVertex2f(36.7,21);
    glVertex2f(35.8,21); glEnd();

    glBegin(GL_LINES);
    glColor3f( 1,1,1); glVertex2f(35.8,19.5);
    glVertex2f(36.7,19.5); glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,.5,.8); glVertex2f(35,14);
    glVertex2f(38,14); glVertex2f(38,17);
    glVertex2f(35,17); glEnd();

    glBegin(GL_LINES);
    glColor3f( 0,0,0); glVertex2f(35,14);
    glVertex2f(35,17); glVertex2f(35,17);
    glVertex2f(43,17); glVertex2f(35,14);
    glVertex2f(46,14); glVertex2f(46,14);
    glVertex2f(46,23); glVertex2f(46,23);
    glVertex2f(43,23); glVertex2f(43,23);
    glVertex2f(43,17); glVertex2f(36,14);
    glVertex2f(36,17); glVertex2f(37,14);
    glVertex2f(37,17); glEnd();


    //civil building, long
    glBegin(GL_POLYGON);
    glColor3f(1,1,1); glVertex2f(10,11);
    glVertex2f(29,13); glVertex2f(29,16);
    glVertex2f(12,14); glVertex2f(12,18);
    glVertex2f(10,18); glEnd();

    glBegin(GL_LINES);
    glColor3f( 0,0,0); glVertex2f(10,11);
    glVertex2f(10,18.1); glVertex2f(10,18.1);
    glVertex2f(12,18.1); glVertex2f(12,18.1);
    glVertex2f(12,14); glVertex2f(12,14);
    glVertex2f(29,16); glVertex2f(29,16);
    glVertex2f(29,13); glVertex2f(29,13);
    glVertex2f(10,11); glEnd();

    //admission office
    glBegin(GL_LINES);
    glColor3f( 0,0,0); glVertex2f(16,29);
    glVertex2f(16,37); glEnd();

    //green garden
    glBegin(GL_POLYGON);
    glColor3f(0,.4,.8); glVertex2f(17,18);
    glVertex2f(22,18); glVertex2f(22,22);
    glVertex2f(17,22); glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,.9); glVertex2f(18,19);
    glVertex2f(21,19); glVertex2f(21,21);
    glVertex2f(18,21); glEnd();

    //ab2 building
    glBegin(GL_POLYGON);
    glColor3f(0,0,.9); glVertex2f(30,13);
    glVertex2f(34,13); glVertex2f(34,17);
    glVertex2f(30,17); glEnd();

    //innovation lab
    glBegin(GL_POLYGON);
    glColor3f(.5,.5,0); glVertex2f(49,16);
    glVertex2f(53,16); glVertex2f(53,20);
    glVertex2f(49,20); glEnd();

    //car moving
     glBegin(GL_POLYGON);
     if(p<=50){
        p+=.005;
     }
     else{
        p=0;
     }
    glColor3f(.5,0,.5);
    glVertex2f(p+15,53.5); glVertex2f(p+17,53.5);
    glVertex2f(p+17,54.5); glVertex2f(p+15,54.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0,0,0); glVertex2f(p+15.5,54);
    glVertex2f(p+16.5,54); glEnd();

    glutPostRedisplay();
}

void Draw()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);

    Alldraw();

    glColor3f(.9, .7, .7); circle(2,2,42.1,46.85);
    glColor3f(1, 1, 1); circle1(2,2,32.5,32);
    glColor3f(0,1,0); circle1(1.8,1.8,32.5,32);
    circle1(1,2.1,16,33); circle1(.5,1.4,16,37);
    circle1(.5,1.4,16,29); glColor3f(0,.4,0.2);
    circle1(.5,1.5,16,33); circle3(1,2,29,20);//mosque
    circle4(1.5,6,70.2,36);//auditorium
    glColor3f(.75,.75,0.75); circle5(2,2,43,17);//ab1

    //tree
    glColor3f(0,.5,0); circle1(.8,.8,53,30);
    circle1(.8,.8,54,30.5); circle1(.8,.8,53.8,29.5);
    glColor3f(0,.5,0); circle1(.8,.8,59,30);
    circle1(.8,.8,60,30.5); circle1(.8,.8,59.8,29.5);
    glColor3f(0,.5,0); circle1(.8,.8,64,30);
    circle1(.8,.8,65,30.5); circle1(.8,.8,64.8,29.5);
    glColor3f(0,.5,0); circle1(.8,.8,14,17);
    circle1(.8,.8,15,17.5); circle1(.8,.8,14.8,16.5);
    glColor3f(0,.9,0); circle2(3,2.5,19,44);

    glutSwapBuffers();
}

void init(void)
{
    glClearColor(0.5,0.7,0.4,0.4);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,100.0,0.0,80.0);
}
int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("DIU");
    init();
    glutDisplayFunc(Draw);

    glutMainLoop();
    return 0;
}
