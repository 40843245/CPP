#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<std::string> myums =
  {"water","sand","ice","water"};

  for (const std::string& x: myums) 
  {
    cout << x << " is in bucket #" << myums.bucket(x) << endl;
  }
  return 0;
}
