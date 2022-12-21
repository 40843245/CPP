#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_set<std::string> myset =
  {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};

  unsigned n = myset.bucket_count();

  cout << "myset has " << n << " buckets."<<endl;

  for (unsigned i=0; i<n; ++i) 
  {
    cout << "bucket #" << i << " contains:";
    for (auto it = myset.begin(i); it!=myset.end(i); ++it)
      cout << " " << (*it);
    cout << endl;
  }

  return 0;
}
