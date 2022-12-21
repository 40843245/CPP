#include <iostream>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<int> myums;

  cout << "max_size = " << myums.max_size() << endl;
  cout << "max_bucket_count = " << myums.max_bucket_count() << endl;
  cout << "max_load_factor = " << myums.max_load_factor() << endl;
  return 0;
}
