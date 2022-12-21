#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<16> foo;
  std::bitset<16> bar (0xfa2);
  std::bitset<16> baz (std::string("0101111001"));

  cout << "foo: " << foo << endl;
  cout << "bar: " << bar << endl;
  cout << "baz: " << baz << endl;
  return 0;
}
