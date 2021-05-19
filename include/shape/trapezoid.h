/**
 * @file trapezoid.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a trapezoid class
 */

#include "two_dimension.h"

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid : public Two_dimension {
protected:
  float b1 = 0;
  float b2 = 0;
  float d = 0;

public:
  Trapezoid() {}
  Trapezoid(float b1, float b2, float h) : Two_dimension(h), b1(b1), b2(b2) {}
  Trapezoid(float b1, float b2, float c, float d)
      : Two_dimension(c), b1(b1), b2(b2), d(d) {}
  Trapezoid(Trapezoid const &trapezoid);
  float perimeter();
  float area();
};

#endif // TRAPEZOID_H_
