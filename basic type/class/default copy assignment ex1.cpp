#include <iostream>
using namespace std;

class Rectangle 
{
  public:
    int width, height;
  public:
    Rectangle (int x, int y) : width(x), height(y) {}
    Rectangle() = default;
    Rectangle (const Rectangle& other) = delete;
    int area() {return width*height;}
};

int main () 
{
  Rectangle foo;
  Rectangle bar (10,20);

  cout << "foo's width: " << foo.width << endl;
  cout << "bar's area: " << bar.area() << endl;
  return 0;
}
/*
possible output:
foo's width: 86
bar's area: 200
*/
