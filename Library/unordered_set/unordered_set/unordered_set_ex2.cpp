#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_set<std::string> myset;

  myset.rehash(12);

  myset.insert("office");
  myset.insert("house");
  myset.insert("gym");
  myset.insert("parking");
  myset.insert("highway");

  cout << "current bucket_count: " << myset.bucket_count() << endl;

  return 0;
}
