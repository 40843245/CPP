#include <iostream>
#include <unordered_map>
using namespace std;

int main ()
{
  std::unordered_map<int,int> mymap;

  cout << "size = " << mymap.size() << endl;
  cout << "bucket_count = " << mymap.bucket_count() << endl;
  cout << "load_factor = " << mymap.load_factor() << endl;
  cout << "max_load_factor = " << mymap.max_load_factor() << endl;

  return 0;
}
