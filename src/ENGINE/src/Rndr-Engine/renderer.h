
#include "../math/math.h"


namespace render 
{
//   // Define function pointers
//   static void (*loop)() = nullptr;
//   static void (*start)() = nullptr;

class Renderer {
public:
  virtual void initialize(int width, int height) = 0;

  virtual void setUpdate(void (*update)() ) = 0;
  virtual void  setStart(void  (*start)() ) = 0;

  virtual void clearScreen(float r, float g, float b, float a) = 0;
  virtual void drawTriangle() = 0;
  virtual void swapBuffers() = 0;
  virtual ~Renderer() = default;

  virtual void drawPoint(math::arr position, math::arr scale, math::arr rotation) = 0;
  virtual void  drawLine(math::arr position, math::arr scale, math::arr rotation) = 0;
  virtual void  drawRect(math::arr position, math::arr scale, math::arr rotation) = 0;


  // virtual void background(math::col col) = 0;

  // virtual void reshape(int w, int h) = 0;
  // virtual void display(void) = 0;

  // virtual void keyboard(unsigned char key, int x, int y) = 0;
  // virtual void keyUp(unsigned char key, int x, int y) = 0;
  // virtual void keyDown(unsigned char key, int x, int y) = 0;
  // virtual void mouse(int button, int state, int x, int y) = 0;
};

}

