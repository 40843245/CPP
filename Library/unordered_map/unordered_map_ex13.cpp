#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main ()
{
  std::unordered_map<std::string,std::string> mymap;

  bool case_insensitive = mymap.key_eq()("test","TEST");

  cout << "mymap.key_eq() is ";
  cout << ( case_insensitive ? "case insensitive" : "case sensitive" );
  cout << endl;

  return 0;
}
