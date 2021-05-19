/**
 * @file cone.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for cone class
 */

#include <cmath>

#include "../include/shape/cone.h"
Cone::Cone(Cone const &cone) {
  this->a = cone.a;
  this->b = cone.b;
}

float Cone::lateral_area() { return M_PI * a * sqrt(a * a + b * b); }
float Cone::area() { return lateral_area() + M_PI * a * a; }
float Cone::volume() { return 1 / 3 * M_PI * a * a * b; }
