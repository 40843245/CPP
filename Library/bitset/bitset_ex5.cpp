#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<8> foo (std::string("10110011"));

  cout << foo << " has ";
  cout << foo.count() << " ones and ";
  cout << (foo.size()-foo.count()) << " zeros."<<endl;
  return 0;
}
