/**
 * @file rectangle.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for rectangle
 */

#include <cmath>

#include "rectangle.h"

/**
 * This is a copy constructor for Rectangle class
 * @param rectangle the object that needed to be copied
 */
Rectangle::Rectangle(Rectangle const &rectangle) {
  this->a = rectangle.a;
  this->b = rectangle.b;
}

/**
 * This is a parimeter function
 * @param length and breadth
 * @return perimeter
 */
float Rectangle::perimeter() { return 2 * (a + b); }

/**
 * This is an area function
 * @param length and breadth
 * @return perimeter
 */
float Rectangle::area() { return (a * b); }
