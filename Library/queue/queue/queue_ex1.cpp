#include <iostream>
#include <queue>
using namespace std;
int main ()
{
  std::queue<int> myqueue;
  int myint;

  cout << "Please enter some integers (enter 0 to end):"<<endl;
  do {
    cin >> myint;
    myqueue.push (myint);
  } while (myint);

  cout << "myqueue contains: ";
  while (!myqueue.empty())
  {
    cout << " " << myqueue.front();
    myqueue.pop();
  }
  cout << endl;
  return 0;
}
