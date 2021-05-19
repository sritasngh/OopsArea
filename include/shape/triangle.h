/**
 * @file triangle.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a triangle class
 */

#include "two_dimension.h"

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle : public Two_dimension {
protected:
  float b = 0;
  float c = 0;
  float s = (a + b + c) / 2; // semiperimeter
public:
  Triangle() {}
  Triangle(float base, float height) : Two_dimension(base), b(height) {}
  Triangle(float side1, float side2, float side3)
      : Two_dimension(side1), b(side2), c(side3) {}
  Triangle(Triangle const &triangle);
  float perimeter();
  float area();
};

#endif // TRIANGLE_H_
