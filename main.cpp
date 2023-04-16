#include <GL/glut.h>

void display() {
    // Clear the screen with white color
    glClearColor(0.53f, 0.81f, 0.92f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

   //big roof
   glColor3f(0.8,0.2,0.2);
   glBegin(GL_TRIANGLES);
        glVertex2f(-0.6, 0.3); //kiri
        glVertex2f(0.5, 0.3); // kanan
        glVertex2f(-0.05, 0.6); // atas
   glEnd();


   //2nd floor walls
   glColor3f(0.5,0.5,0.5);
   glBegin(GL_QUADS);
        glVertex2f(-0.25, 0.4); //kiri bawah
        glVertex2f(-0.25, 0.55); //kiri atas
        glVertex2f(0.2, 0.55); //kanan atas
        glVertex2f(0.2, 0.4); //kanan bawah
    glEnd();

    //small roof
   glColor3f(0.8,0.2,0.2);
   glBegin(GL_TRIANGLES);
        glVertex2f(-0.45, 0.5); //kiri
        glVertex2f(0.4, 0.5); // kanan
        glVertex2f(-0.025, 0.7); // atas
   glEnd();
   //1st floor walls
    glColor3f(0.5,0.5,0.59);
    glBegin(GL_QUADS);
        glVertex2f(-0.5, -0.0);
        glVertex2f(-0.5, 0.3);
        glVertex2f(0.4, 0.3);
        glVertex2f(0.4, -0.0);
    glEnd();


    //door
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.05, 0.0);
        glVertex2f(-0.05, 0.2);
        glVertex2f(0.04, 0.2);
        glVertex2f(0.04, 0.0);
    glEnd();

    //window 1
    glColor3f(4.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.4, 0.05);// bottom left
        glVertex2f(-0.4, 0.2); // up left
        glVertex2f(-0.3, 0.2); // up right
        glVertex2f(-0.3, 0.05); // bottom right
    glEnd();

    //window 2
    glColor3f(4.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.2, 0.05);// bottom left
        glVertex2f(-0.2, 0.2); // up left
        glVertex2f(-0.1, 0.2); // up right
        glVertex2f(-0.1, 0.05); // bottom right
    glEnd();
    //window 3
    glColor3f(4.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0.3, 0.05);// bottom left
        glVertex2f(0.3, 0.2); // up left
        glVertex2f(0.2, 0.2); // up right
        glVertex2f(0.2, 0.05); // bottom right
    glEnd();

    // Swap the front and back buffers
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    // Initialize GLUT and create the window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500, 800);
    glutCreateWindow("2D House");

    // Set up the display function
    glutDisplayFunc(display);

    // Enter the GLUT event loop
    glutMainLoop();
    return 0;
}
