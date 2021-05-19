/**
 * @file triangle.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for triangle
 */

#include <cmath>

#include "../include/shape/triangle.h"

/**
 * This is a copy constructor
 * @param triangle the object that needs to be copied
 */
Triangle::Triangle(Triangle const &triangle) {
  this->a = triangle.a;
  this->b = triangle.b;
  this->c = triangle.c;
  this->s = triangle.s;
}

/**
 * This function finds perimeter of the triangle
 * @param semiparimeter
 * @return perimeter
 */
float Triangle::perimeter() { return 2 * s; }

/**
 * This function finds area of the triangle
 * @param s->semiparimeter
 * @return area
 */
float Triangle::area() {
  if (c == 0) {
    return (a * b) / 2; // a->base , b->height
  } else {
    return sqrt(s * (s - a) * (s - b) * (s - c)); // a,b,c ->sides
  }
}
