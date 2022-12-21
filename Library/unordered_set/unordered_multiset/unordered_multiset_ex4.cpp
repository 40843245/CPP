#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_multiset<std::string> myums =
    {"cow","pig","chicken","pig","pig","cow"};

  for (auto& x: {"cow","sheep","pig"}) 
  {
    cout << x << ": " << myums.count(x) << endl;
  }
  return 0;
}
