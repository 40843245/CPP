#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main ()
{
  std::unordered_set<std::string> myset = { "hat", "umbrella", "suit" };

  for (auto& x: {"hat","sunglasses","suit","t-shirt"}) 
  {
    if (myset.count(x)>0)
      cout << "myset has " << x << endl;
    else
      cout << "myset has no " << x <<endl;
  }
  return 0;
}
