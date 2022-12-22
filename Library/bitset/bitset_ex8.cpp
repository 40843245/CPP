#include <iostream>
#include <string>
#include <cstddef>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<5> foo (std::string("01011"));

  cout << "foo contains:"<<endl;
  cout << std::boolalpha;
  for (std::size_t i=0; i<foo.size(); ++i)
  {
    cout << foo.test(i) << endl;
  }
  return 0;
}
