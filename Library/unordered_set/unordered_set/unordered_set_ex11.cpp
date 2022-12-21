#include <iostream>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_set<int> myset;

  cout << "max_size = " << myset.max_size() << endl;
  cout << "max_bucket_count = " << myset.max_bucket_count() << endl;
  cout << "max_load_factor = " << myset.max_load_factor() << endl;
  return 0;
}
