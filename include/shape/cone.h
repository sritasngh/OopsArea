/**
 * @file cone.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a cone class
 */

#include "three_dimension.h"

#ifndef CONE_H_
#define CONE_H_

class Cone : public Three_dimension {
protected:
  float b = 0;

public:
  Cone() {}
  Cone(float radius, float height) : Three_dimension(radius), b(height) {}
  Cone(Cone const &cone);
  float lateral_area();
  float area();
  float volume();
};

#endif // CONE_H_
