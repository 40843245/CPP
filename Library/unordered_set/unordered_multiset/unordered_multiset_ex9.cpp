#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<std::string> myums;

  myums.rehash(12);

  myums.insert("red");
  myums.insert("red");
  myums.insert("blue");
  myums.insert("green");
  myums.insert("yellow");

  cout << "current bucket_count: " << myums.bucket_count() << endl;
  return 0;
}
