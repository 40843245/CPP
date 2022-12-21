#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  std::vector<bool> mask;

  mask.push_back(true);
  mask.push_back(false);
  mask.push_back(false);
  mask.push_back(true);

  mask.flip();

  cout << std::boolalpha;
  cout << "mask contains:";
  for (unsigned i=0; i<mask.size(); i++)
  {
    cout << ' ' << mask.at(i);
  }
  cout << endl;
  return 0;
}
