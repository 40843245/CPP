#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  std::vector<int> myvector (100);
  cout << "1. capacity of myvector: " << myvector.capacity() << endl;

  myvector.resize(10);
  cout << "2. capacity of myvector: " << myvector.capacity() << endl;

  myvector.shrink_to_fit();
  cout << "3. capacity of myvector: " << myvector.capacity() << endl;
  return 0;
}
