#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::shared_ptr<int> sp;  // empty
  cout << (*sp) << endl;
  sp.reset (new int);       // takes ownership of pointer
  *sp=10;
  cout << (*sp) << endl;

  sp.reset (new int);       // deletes managed object, acquires new pointer
  cout << (*sp) << endl;
  *sp=20;
  cout << (*sp) << endl;

  sp.reset();               // deletes managed object
  return 0;
}
/*
possible output:
1668509029
10
0
20
*/
