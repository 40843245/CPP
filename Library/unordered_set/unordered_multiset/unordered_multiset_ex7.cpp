#include <iostream>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<int> myums;

  cout << "size = " << myums.size() <<endl;
  cout << "bucket_count = " << myums.bucket_count() << endl;
  cout << "load_factor = " << myums.load_factor() << endl;
  cout << "max_load_factor = " << myums.max_load_factor() << endl;
  return 0;
}
