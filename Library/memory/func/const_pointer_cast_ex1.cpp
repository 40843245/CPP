#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::shared_ptr<int> foo;
  std::shared_ptr<const int> bar;

  foo = std::make_shared<int>(10);

  bar = std::const_pointer_cast<const int>(foo);

  cout << "*bar: " << (*bar) << endl;
  *foo = 20;
  cout << "*bar: " << (*bar) << endl;

  return 0;
}
/*
output:
*bar: 10
*bar: 20
*/
