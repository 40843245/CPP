#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

typedef std::unordered_map<std::string,std::string> stringmap;

int main ()
{
  stringmap mymap;

  stringmap::hasher fn = mymap.hash_function();

  cout << "this: " << fn ("this") << endl;
  cout << "thin: " << fn ("thin") << endl;

  return 0;
}
