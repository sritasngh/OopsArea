/**
 * @file cuboid.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a cuboid class
 */

#include "three_dimension.h"

#ifndef CUBOID_H_
#define CUBOID_H_

class Cuboid : public Three_dimension {
protected:
  float b = 0;
  float c = 0;

public:
  Cuboid() {}
  Cuboid(float length, float breadth, float height)
      : Three_dimension(length), b(breadth), c(height) {}
  Cuboid(Cuboid const &cuboid);
  float perimeter();
  float area();
  float volume();
};

#endif // CUBOID_H_
