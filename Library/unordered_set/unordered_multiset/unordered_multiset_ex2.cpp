#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<std::string> myums =
  {"Klingon","Vulcan","Klingon","Cardassian","Vulcan","Human"};

  unsigned n = myums.bucket_count();

  cout << "myums has " << n << " buckets."<<endl;
  for (unsigned i=0; i<n; ++i) 
  {
    cout << "bucket #" << i << " contains:";
    for (auto it = myums.begin(i); it!=myums.end(i); ++it)
      cout << " " << (*it);
    cout << endl;
  }
  return 0;
}
