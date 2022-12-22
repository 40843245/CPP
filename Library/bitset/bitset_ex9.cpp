#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<4> mybits;     // mybits: 0000
  mybits.set();              // mybits: 1111

  std::string mystring =mybits.to_string<char,std::string::traits_type,std::string::allocator_type>();

  cout << "mystring: " << mystring << endl;
  return 0;
}
