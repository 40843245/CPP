#include <iostream>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<4> foo;

  cout << foo.set() << endl;
  cout << foo.set(2,0) << endl;    
  cout << foo.set(2) << endl;  
  return 0;
}
