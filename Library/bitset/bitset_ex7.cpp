#include <iostream>
#include <bitset>
using namespace std;

int main ()
{
  std::bitset<16> foo;

  cout << "Please, enter a binary number: ";
  cin >> foo;

  if (foo.any())
  {
    std::cout << foo << " has " << foo.count() << " bits set."<<endl;
  }
  else
  {
    cout << foo << " has no bits set."<<endl;
  }
  return 0;
}
