#include <iostream>
#include <array>
using namespace std;
int main ()
{
  std::array<int,10> myarray;

  // assign some values:
  for (int i=0; i<10; i++) myarray.at(i) = i+1;

  
  cout << "myarray contains:";
  for (int i=0; i<10; i++)
  {
      cout << ' ' << myarray.at(i);
  }
  cout << endl;

  return 0;
}
