#include <iostream>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<4> foo;
  foo.set();

  cout << foo << " as an integer is: " << foo.to_ullong() << endl;
  return 0;
}
