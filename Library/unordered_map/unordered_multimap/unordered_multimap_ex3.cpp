#include <iostream>
#include <unordered_map>
using namespace std;

int main ()
{
  std::unordered_multimap<int,int> mymap;

  cout << "max_size = " << mymap.max_size() << endl;
  cout << "max_bucket_count = " << mymap.max_bucket_count() << endl;
  cout << "max_load_factor = " << mymap.max_load_factor() << endl;
  return 0;
}
