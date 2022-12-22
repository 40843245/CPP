#include <iostream>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<8> foo;
  std::bitset<4> bar;

  cout << "foo.size() is " << foo.size() << endl;
  cout << "bar.size() is " << bar.size() << endl;

  return 0;
}
