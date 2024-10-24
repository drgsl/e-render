



#include <iostream>

#include "../e-render/engine.h"

#include "code.cpp"

void start();
void update();



int main (int argc, char *argv[])
{
  std::cout <<"init";
  // render::init(start, update);
  start();
  update();
  // render::Renderer::drawPoint(math::arr(3, 0,0,0), math::arr(3, 1,1,1), math::arr(3, 0,0,0));
  engine::Engine engine(render::API::OpenGL);
  // engine.run();
  // engine.connect(start, update);

  return 0;
}



