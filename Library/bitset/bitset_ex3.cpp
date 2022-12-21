#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<4> foo (std::string("1011"));

  cout << foo << endl;
  cout << foo.reset(1) << endl;
  cout << foo.reset() << endl;
  return 0;
}
