#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

typedef std::unordered_set<std::string> stringset;

int main ()
{
  stringset myset;

  stringset::hasher fn = myset.hash_function();

  cout << "that: " << fn ("that") << endl;
  cout << "than: " << fn ("than") << endl;
  return 0;
}
