/**
 * @file sphere.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a sphere class
 */

#include "three_dimension.h"

#ifndef SPHERE_H_
#define SPHERE_H_

class Sphere : public Three_dimension {
public:
  Sphere() {}
  Sphere(float radius) : Three_dimension(radius) {}
  Sphere(Sphere const &sphere);
  float area();
  float volume();
};

#endif // SPHERE_H_
