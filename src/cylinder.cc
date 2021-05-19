/**
 * @file cylinder.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for cylinder class
 */

#include <cmath>

#include "../include/shape/cylinder.h"

Cylinder::Cylinder(Cylinder const &cylinder) {
  this->a = cylinder.a;
  this->b = cylinder.b;
}
float Cylinder::area() { return 2 * M_PI * a * (a + b); }
float Cylinder::volume() { return M_PI * a * a * b; }
