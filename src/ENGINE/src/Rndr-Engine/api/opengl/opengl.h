// #ifndef RENDER_H
// #define RENDER_H

// #include <GL/glut.h>
// #include <GL/freeglut.h>

// namespace render 
// {
//   class opengl
//   {
//   public:
//     static void display(void);
//     static void reshape(int w, int h);
//     static void keyboard(unsigned char key, int x, int y);
//     static void keyUp(unsigned char key, int x, int y);
//     static void mouse(int button, int state, int x, int y);
//   };

//   void init(void (*startFunc)() = nullptr, void (*loopFunc)() = nullptr);
// }

// #endif // RENDER_H
//
//
//



#ifndef OPENGL_RENDERER_H
#define OPENGL_RENDERER_H

// OpenGLRenderer.h
#include "../../renderer.h"
namespace render 
{
class OpenGLRenderer: public Renderer 
{
private:
  static void (*update)();
  static void (*start)();
public:
  void initialize(int width, int height) override;
 
  void setUpdate(void (*update)() ) override;
  void  setStart(void  (*start)() ) override;

  void clearScreen(float r, float g, float b, float a) override;
  void drawTriangle() override;
  void swapBuffers() override;
  
  void drawPoint(math::arr position, math::arr scale, math::arr rotation) override;
  void  drawLine(math::arr position, math::arr scale, math::arr rotation) override;
  void  drawRect(math::arr position, math::arr scale, math::arr rotation) override;

  // void reshape(int w, int h) override;
  // void display(void) override;

  // void keyboard(unsigned char key, int x, int y) override;
  // void keyUp(unsigned char key, int x, int y) override;
  // void keyDown(unsigned char key, int x, int y) override;
  // void mouse(int button, int state, int x, int y) override;
};
}

#endif // OPENGL_RENDERER_H
//
//
// 

