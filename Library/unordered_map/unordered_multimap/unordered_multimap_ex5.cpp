#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main ()
{

  std::unordered_multimap<std::string,std::string> myumm;

  myumm.reserve(7);

  myumm.insert({{"apple","NY"},{"apple","WA"},{"peach","GA"}});
  myumm.insert({{"orange","FL"},{"cherry","UT"}});
  myumm.insert({{"strawberry","LA"},{"strawberry","NC"}});

  for (auto& x: myumm) 
  {
    cout << x.first << ": " << x.second << endl;
  }

  return 0;
}
