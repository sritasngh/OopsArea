/**
 * @file rectangle.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a RectAngle class
 */

#include "two_dimension.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle : public Two_dimension {
protected:
  float b = 0;

public:
  Rectangle() {}
  Rectangle(float length, float breadth) : Two_dimension(length), b(breadth) {}
  Rectangle(Rectangle const &rectangle);
  float perimeter();
  float area();
};

#endif // RECTANGLE_H_
