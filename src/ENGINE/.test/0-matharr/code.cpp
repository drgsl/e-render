


#include <iostream>
#include "../e-render/engine.h"

void start()
{
  std::cout << "START";
  math::arr v = math::arr(4, (double)0,(double)0,(double)0, (double)5);

  v.print();
  math::arr v1(3, 1.0, 2.0, 3.0);
  v1.print(); // Output: 1.0 2.0 3.0

  // Accessing elements using the [] operator
  v1[1] = 4.0; // Modify the second element
  v1.print();  // Output: 1.0 4.0 3.0

  // Accessing using const reference
  const math::arr v2 = v1;
  std::cout << v2[0] << std::endl; // Output: 1.0
  //

  GameObject p;
  drawPoint(v, v,v);

  // Uncommenting the line below will throw an exception
  // std::cout << v1[5] << std::endl; // Throws std::out_of_range
}


void update()
{
  std::cout << "update";
}

