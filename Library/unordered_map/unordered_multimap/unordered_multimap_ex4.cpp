#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main ()
{
  std::unordered_multimap<std::string,std::string> myumm;

  myumm.rehash(20);

  myumm.insert({{"apple","NY"},{"apple","WA"},{"peach","GA"}});
  myumm.insert({{"orange","FL"},{"cherry","UT"}});
  myumm.insert({{"strawberry","LA"},{"strawberry","NC"}});

  cout << "current bucket_count: " << myumm.bucket_count() << endl;
  return 0;
}
