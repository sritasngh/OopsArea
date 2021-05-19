/**
 * @file circle.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a circle class
 */

#include "two_dimension.h"

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle : public Two_dimension {
public:
  Circle() {}
  Circle(float radius) : Two_dimension(radius) {}
  Circle(Circle const &circle);
  float perimeter();
  float area();
};

#endif // CIRCLE_H_
