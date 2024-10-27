

#include "opengl.h"
#include <GL/freeglut_std.h>
#include <GL/gl.h>
#include <GL/glut.h>



void render::OpenGLRenderer::drawPoint(math::arr position, math::arr scale, math::arr rotation) 
{
  GLfloat vertices[] = 
    {
      0.0f 
    };

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glPushMatrix();
    glTranslatef(position[0], position[1], position[2]);
    glRotatef(rotation[0], 1.0f, 0.0f, 0.0f);
    glRotatef(rotation[1], 0.0f, 1.0f, 0.0f);
    glRotatef(rotation[2], 0.0f, 0.0f, 1.0f);
    glScalef(scale[0], scale[1], scale[2]);   // Scale last

  glPointSize(5);

    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glDrawArrays(GL_POINTS, 0, 1);
    glDisableClientState(GL_VERTEX_ARRAY);
  glPopMatrix();
}

void render::OpenGLRenderer::drawLine(math::arr position, math::arr scale, math::arr rotation) 
{
  GLfloat vertices[] = 
    {
      -1.0f, 0.0f, 0.0f,
       1.0f, 0.0f, 0.0f,
    };

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glPushMatrix();
    glTranslatef(position[0], position[1], position[2]);
    glRotatef(rotation[0], 1.0f, 0.0f, 0.0f);
    glRotatef(rotation[1], 0.0f, 1.0f, 0.0f);
    glRotatef(rotation[2], 0.0f, 0.0f, 1.0f);
    glScalef(scale[0], scale[1], scale[2]);   // Scale last
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glDrawArrays(GL_LINES, 0, 2);
    glDisableClientState(GL_VERTEX_ARRAY);
  glPopMatrix();
}

void render::OpenGLRenderer::drawRect(math::arr position, math::arr scale, math::arr rotation) 
{
  GLfloat vertices[] = 
    {
      -0.5f, -0.5f, 0.0f,
       0.5f, -0.5f, 0.0f,
       0.5f,  0.5f, 0.0f,
      -0.5f,  0.5f, 0.0f 
    };

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glPushMatrix();
    glTranslatef(position[0], position[1], position[2]);
    glRotatef(rotation[0], 1.0f, 0.0f, 0.0f);
    glRotatef(rotation[1], 0.0f, 1.0f, 0.0f);
    glRotatef(rotation[2], 0.0f, 0.0f, 1.0f);
    glScalef(scale[0], scale[1], scale[2]);   // Scale last
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glDrawArrays(GL_QUADS, 0, 4);
    glDisableClientState(GL_VERTEX_ARRAY);
  glPopMatrix();
}

void render::OpenGLRenderer::clearScreen(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT);
}

void render::OpenGLRenderer::drawTriangle() {
    // OpenGL code to draw a triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

