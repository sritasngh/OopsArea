/**
 * @file shape.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a Shape class
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
protected:
  float a = 0;
  Shape() {}
  Shape(float side) : a(side) {}
  virtual float area() = 0;
};

#endif // SHAPE_H_
