/**
 * @file cylinder.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a cylinder class
 */

#include "three_dimension.h"

#ifndef CYLINDER_H_
#define CYLINDER_H_

class Cylinder : public Three_dimension {
protected:
  float b = 0;

public:
  Cylinder() {}
  Cylinder(float radius, float height) : Three_dimension(radius), b(height) {}
  Cylinder(Cylinder const &cylinder);
  float area();
  float volume();
};

#endif // CYLINDER_H_
