/**
 * @file circle.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for circle class
 */

#include <cmath>

#include "../include/shape/circle.h"

Circle::Circle(Circle const &circle) { this->a = circle.a; }

float Circle::perimeter() { return 2 * M_PI * a; }

float Circle::area() { return M_PI * a * a; }
