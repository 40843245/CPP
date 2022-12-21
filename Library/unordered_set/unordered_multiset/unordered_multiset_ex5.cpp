#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

typedef std::unordered_multiset<std::string> stringset;

int main ()
{
  stringset myums;

  stringset::hasher fn = myums.hash_function();

  cout << "that: " << fn ("that") << endl;
  cout << "than: " << fn ("than") << endl;
  return 0;
}
