/**
 * @file tetrahedron.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a tetrahedron class
 */

#include <cmath>

#include "three_dimension.h"

#ifndef TETRAHEDRON_H_
#define TETRAHEDRON_H_

class Tetrahedron : public Three_dimension {
public:
  Tetrahedron() {}
  Tetrahedron(float side) : Three_dimension(side) {}
  Tetrahedron(Tetrahedron const &tetrahedron);
  float area();
  float volume();
};

#endif // TETRAHEDRON_H_
