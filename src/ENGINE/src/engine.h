#pragma once




#include "src/math/math.h"


#include "src/Renderer/factory.h"

#include "src/game.h"
#include "src/physics.h"


namespace engine 
{
class Engine
{
private:
  render::Renderer* renderer;
public:
  Engine(render::API api) {
      renderer = render::RendererFactory::createRenderer(api);
      renderer->initialize(800, 600);
  }

  void run() {
      // Main game loop
      while (true) {
          renderer->clearScreen(0.1f, 0.2f, 0.3f, 1.0f);
          // renderer->drawTriangle();
          // renderer->drawPoint(math::arr(3, 0.0f,0.0f,0.0f), math::arr(3, 1.0f,1.0f,1.0f), math::arr(3, 0.0f,0.0f,0.0f));
          renderer->drawLine(math::arr( 3, 0.0f,0.0f,0.0f), math::arr(3, 1.0f,1.0f,1.0f), math::arr(3, 0.0f,0.0f,0.0f));
          // renderer->drawRect(math::arr( 3, 1.0f,1.0f,1.0f), math::arr(3, 2.0f,2.0f,2.0f), math::arr(3, 0.0f,0.0f,0.0f));

          renderer->swapBuffers();
      }
  }

  void connect(void (*update)() = 0, void (*start)() = 0, void (*awake)() = 0, void (*fixed)() = 0 )
  {
    if(update)
    {
      renderer->setUpdate(update);
    }
  }


  ~Engine() {
      delete renderer;
  }
};
}











