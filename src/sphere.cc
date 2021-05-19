/**
 * @file sphere.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for sphere class
 */

#include <cmath>

#include "../include/shape/sphere.h"

Sphere::Sphere(Sphere const &sphere) { this->a = sphere.a; }
float Sphere::area() { return 4 * M_PI * a * a; }
float Sphere::volume() { return 4 / 3 * M_PI * a * a * a; }
