/**
 * @file cuboid.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for cuboid class
 */

#include "../include/shape/cuboid.h"

Cuboid::Cuboid(Cuboid const &cuboid) {
  this->a = cuboid.a;
  this->b = cuboid.b;
  this->c = cuboid.c;
}

float Cuboid::perimeter() { return 4 * (a + b + c); }
float Cuboid::area() { return 2 * (a * b + b * c + c * a); }
float Cuboid::volume() { return a * a * a; }
