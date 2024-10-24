// #include "opengl.h"
// #include <cstdlib>
// #include <cstdio>

// namespace render 
// {
//   // Function definitions for opengl class
//   void opengl::display(void)
//   {
//     if(render::loop)
//       loop();

//     glutSwapBuffers();
//     glFlush();
//     glutPostRedisplay();
//   }

//   void opengl::reshape(int w, int h)
//   {
//     glViewport(0,0,(GLsizei) w, (GLsizei) h);
//   }

//   void opengl::keyboard(unsigned char key, int x, int y)
//   {
//     if (key == 27)
//         exit(0);
//   }

//   void opengl::keyUp(unsigned char key, int x, int y)
//   {
//     // Key release event can be handled here
//   }

//   void opengl::mouse(int button, int state, int x, int y)
//   {
//     // Mouse event can be handled here
//   }

//   // Initialize and configure OpenGL
//   void init(void (*startFunc)(), void (*loopFunc)())
//   {
//     start = startFunc;
//     loop = loopFunc;

//     int argc = 1;
//     char *argv[1] = {(char*)"App"};

//     bool is_using_opengl = true;
//   
//     if (is_using_opengl) 
//     {  
//       glutInit(&argc, argv);
//       glutInitWindowSize(480, 480); // 480x640
//       glutInitWindowPosition(0,0);
//       glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
//       glutCreateWindow("Canvas");

//       glutReshapeFunc(opengl::reshape);
//       glutDisplayFunc(opengl::display);
//       glutKeyboardFunc(opengl::keyboard);
//       glutKeyboardUpFunc(opengl::keyUp); // Register key release event
//       glutMouseFunc(opengl::mouse);
//     }

//     if(start)
//       start();

//     glutMainLoop();
//   }
// }







// OpenGLRenderer.cpp
#include "opengl.h"
#include <GL/freeglut_std.h>
#include <GL/gl.h>
#include <GL/glut.h>


#include "drawPrimitive.cpp"

void render::OpenGLRenderer::initialize(int width, int height) {
  int argc = 1;
  char *argv[1] = {(char*)""};
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowSize(width, height);
  glutCreateWindow("OpenGL Renderer");
  glutInitWindowPosition(0,0);

  glutDisplayFunc([]() {
      if (update)
          update();

      glutSwapBuffers();
      glFlush();
      glutPostRedisplay();
  });

  glutReshapeFunc([](int w, int h) {
      glViewport(0, 0, (GLsizei) w, (GLsizei) h);
  });

  glutKeyboardFunc([](unsigned char key, int x, int y) {
      if (key == 27)  // ESC key
          exit(0);
  });

  glutKeyboardUpFunc([](unsigned char key, int x, int y) {
      // Key release event can be handled here
  });

  glutMouseFunc([](int button, int state, int x, int y) {
      // Mouse event can be handled here
  });

  glutSpecialFunc([](int key, int x, int y) {
      // Special key down event (e.g., arrow keys) can be handled here
  });


  // if (awake)
  //     awake();
  if (start)
      start();

  glutMainLoop();
}

void render::OpenGLRenderer::swapBuffers() {
    glutSwapBuffers();
    glFlush();
    glutPostRedisplay();
}



