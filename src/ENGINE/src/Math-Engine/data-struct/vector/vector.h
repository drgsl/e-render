
#ifndef VECTOR_H
#define VECTOR_H

#include <cstdarg>  // For va_list, va_start, va_arg, va_end
#include <iostream> // For std::cout

namespace math 
{
class arr
{
private:
  float *x;   // Pointer to dynamically allocated array
  size_t size; // Number of elements in the vector

public:
  // Constructor that takes a variable number of arguments
  arr(size_t count, ...);

  // Destructor to deallocate the memory
  ~arr();

  // Copy constructor
  arr(const arr &other);

  // Assignment operator
  arr& operator=(const arr &other);

  // Overload the [] operator for element access
  float& operator[](size_t index);
  const float& operator[](size_t index) const;

  // Display the vector contents for debugging
  void print() const;
};
} 

#endif // VECTOR_H

