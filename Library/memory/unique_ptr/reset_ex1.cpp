#include <iostream>
#include <memory>
using namespace std;
int main () 
{
  std::unique_ptr<int> up;
  cout << "up: " << (up?"not null":"null") << endl;
  up.reset (new int);
  *up=5;
  cout << (*up) << endl;
  cout << "up: " << (up?"not null":"null") << endl;

  up.reset (new int);       // deletes managed object, acquires new pointer
  *up=10;
  cout << *up << endl;
  cout << "up: " << (up?"not null":"null") << endl;
  up.reset();               // deletes managed object
  cout << "up: " << (up?"not null":"null") << endl;
  return 0;
}
