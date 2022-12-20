#include <iostream>
#include <deque>
using namespace std;

int main ()
{
  std::deque<int> mydeque;
  mydeque.push_back(10);
  while (mydeque.back() != 0)
  {
    mydeque.push_back ( mydeque.back() -1 );
  }

  cout << "mydeque contains:";
  for (std::deque<int>::iterator it = mydeque.begin(); it!=mydeque.end(); ++it)
  {
    cout << ' ' << (*it);
  }
  cout << endl;
  return 0;
}
