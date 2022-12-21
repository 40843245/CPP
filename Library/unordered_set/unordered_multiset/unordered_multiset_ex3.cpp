#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<std::string> myums =
  {"human","klingon","klingon","vulcan","romulan","cardassian"};

  unsigned nbuckets = myums.bucket_count();

  cout << "myums has " << nbuckets << " buckets:"<<endl;
  for (unsigned i=0; i<nbuckets; ++i) 
  {
    cout << "bucket #" << i << " has " << myums.bucket_size(i) << " elements."<<endl;
  }
  return 0;
}
