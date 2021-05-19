/**
 * @file cube.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a cube class
 */

#include <cmath>

#include "cuboid.h"

#ifndef CUBE_H_
#define CUBE_H_

class Cube : public Cuboid {
public:
  Cube(float side) : Cuboid(side, side, side) {}
};

#endif // CUBE_H_
