/**
 * @file three_dimension.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * this is in 3-D shape
 */

#include "shape.h"

#ifndef THREE_DIMENSION_H_
#define THREE_DIMENSION_H_

class Three_dimension : public Shape {
public:
  Three_dimension() {}
  Three_dimension(float side) : Shape(side) {}
  virtual float volume() = 0;
};

#endif // THREE_DIMENSION_H_
