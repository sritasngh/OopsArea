/**
 * @file two_dimension.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is in Two-dimension
 */

#include "shape.h"

#ifndef TWO_DIMENSION_H_
#define TWO_DIMENSION_H_

class Two_dimension : public Shape {
protected:
  Two_dimension() {}
  Two_dimension(float side) : Shape(side) {}
  virtual float perimeter() = 0;
};

#endif // TWO_DIMENSION_H_
