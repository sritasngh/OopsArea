/**
 * @file square.h
 * @author Sarita Singh <saritasingh.0425@gmail.com>
 * @since May 16, 2021
 *
 * This is a square class
 */

#include "rectangle.h"

#ifndef SQUARE_H_
#define SQUARE_H_

class Square : public Rectangle {
public:
  Square(float side) : Rectangle(side, side) {}
};

#endif // SQUARE_H_
