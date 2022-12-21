#include <iostream>
#include <stack>
#include <vector>
#include <deque>
using namespace std;

int main ()
{
  std::deque<int> mydeque (3,100);          // deque with 3 elements
  std::vector<int> myvector (2,200);        // vector with 2 elements

  std::stack<int> first;                    // empty stack
  std::stack<int> second (mydeque);         // stack initialized to copy of deque

  std::stack<int,std::vector<int> > third;  // empty stack using vector
  std::stack<int,std::vector<int> > fourth (myvector);

  cout << "size of first: " << first.size() << endl;
  cout << "size of second: " << second.size() << endl;
  cout << "size of third: " << third.size() << endl;
  cout << "size of fourth: " << fourth.size() << endl;
  return 0;
}
