#include <iostream>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_set<int> myset;

  cout << "size = " << myset.size() << endl;
  cout << "bucket_count = " << myset.bucket_count() << endl;
  cout << "load_factor = " << myset.load_factor() << endl;
  cout << "max_load_factor = " << myset.max_load_factor() << endl;
  return 0;
}
