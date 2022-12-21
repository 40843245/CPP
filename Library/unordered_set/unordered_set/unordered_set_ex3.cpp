#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_set<std::string> myset;

  bool case_insensitive = myset.key_eq()("checking","CHECKING");

  cout << "myset.key_eq() is ";
  cout << ( case_insensitive ? "case insensitive" : "case sensitive" );
  cout << endl;
  return 0;
}
