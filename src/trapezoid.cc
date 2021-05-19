/**
 * @file trapezoid.cc
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is the implementation for trapezoid class
 */

#include "../include/shape/trapezoid.h"

Trapezoid::Trapezoid(Trapezoid const &trapezoid) {
  this->a = trapezoid.a;
  this->b1 = trapezoid.b1;
  this->b2 = trapezoid.b2;
  this->d = trapezoid.d;
}

float Trapezoid::perimeter() { return a + b1 + b2 + d; }
float Trapezoid::area() { return 1 / 2 * (b1 + b2) * a; }
