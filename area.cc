#include <cmath>
#include <iostream>
#include"triangle.h"
using namespace std;

int main() {
  Triangle tri(4, 5, 3);
  cout << tri.perimeter();
  return 0;
}