// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int x, y;
  public:
    Rectangle (int,int);
    int calc_area (void) {return (x*y);}
};

Rectangle::Rectangle (int a, int b) {
  x = a;
  y = b;
}

int main () {
  Rectangle r(2,5);
  cout << "area: " << r.calc_area() << endl;
}


