/**
 * @file tetrahedron.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for tetrahedron class
 */

#include <cmath>

#include "../include/shape/tetrahedron.h"

Tetrahedron::Tetrahedron(Tetrahedron const &tetrahedron) {
  this->a = tetrahedron.a;
}
float Tetrahedron::area() { return sqrt(3) * a * a; }
float Tetrahedron::volume() { return a * a * a / (6 * sqrt(2)); }
