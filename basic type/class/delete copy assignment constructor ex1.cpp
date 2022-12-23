#include <iostream>
using namespace std;

class Rectangle 
{
    int width, height;
  public:
    Rectangle (int x, int y) : width(x), height(y) {}
    Rectangle() = default;
    Rectangle (const Rectangle& other) = delete; // Delete the copy assignment constructor
    int area() {return width*height;}
};

int main () 
{
  Rectangle foo;
  Rectangle bar (10,20);
  //Rectangle baz(bar); // Compiler Error: Due to call to deleted constructor of 'Rectangle'
  //Rectangle tar=bar; // Compiler Error: Due to call to deleted constructor of 'Rectangle'
  cout << "bar's area: " << bar.area() << endl;
  return 0;
}
