#include <iostream>
#include <deque>
using namespace std;

int main ()
{
  std::deque<int> mydeque = {10,20,30};

  mydeque.emplace_back (100);
  mydeque.emplace_back (300);

  cout << "mydeque contains:";
  for (auto& x: mydeque)
  {
    cout << ' ' << x;
  }
  cout << endl;
  return 0;
}
