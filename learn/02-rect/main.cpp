#include <GL/gl.h>
#include <GL/glut.h>

void draw_rect() {
    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
        glColor3f(0., 1.f, 0.);
        glVertex2f(.25f, .25f);

        glColor3f(1.f, 1.f, 0.f);
        glVertex2f(.25f, .75f);

        glColor3f(1.f, 0.f, 0.f);
        glVertex2f(.75f, .75f);

        glColor3f(0.f, 0.f, 1.f);
        glVertex2f(.75f, .25f);
    glEnd();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    draw_rect();
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
