
#include "vector.h"  // Include the central math header
#include <iostream>
#include <stdexcept> // For std::out_of_range

// Define the constructor that takes a variable number of arguments
math::arr::arr(size_t count, ...) 
{
    size = count;
    x = new float[count];

    va_list args;      // Declare a list to hold the variable arguments
    va_start(args, count);  // Initialize the argument list with the count

    for (size_t i = 0; i < count; ++i) 
    {
        x[i] = va_arg(args, double);  // Retrieve each argument from the list
    }

    va_end(args);  // Clean up the argument list
}

// Destructor to deallocate the memory
math::arr::~arr() 
{
    delete[] x;
}

// Copy constructor
math::arr::arr(const arr &other)
{
    size = other.size;
    x = new float[size];
    for (size_t i = 0; i < size; ++i)
    {
        x[i] = other.x[i];
    }
}

// Assignment operator
math::arr& math::arr::operator=(const arr &other)
{
    if (this != &other)
    {
        delete[] x;
        size = other.size;
        x = new float[size];
        for (size_t i = 0; i < size; ++i)
        {
            x[i] = other.x[i];
        }
    }
    return *this;
}

// Overload the [] operator for element access
float& math::arr::operator[](size_t index) 
{
    if (index >= size) 
    {
        throw std::out_of_range("Index out of range"); // Handle out-of-bounds access
    }
    return x[index];
}

const float& math::arr::operator[](size_t index) const 
{
    if (index >= size) 
    {
        throw std::out_of_range("Index out of range"); // Handle out-of-bounds access
    }
    return x[index];
}

// Display the vector contents for debugging
void math::arr::print() const
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
}

