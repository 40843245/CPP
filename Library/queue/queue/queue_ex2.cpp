#include <iostream>
#include <queue>
using namespace std;
int main ()
{
  std::queue<int> myqueue;

  myqueue.push(77);
  myqueue.push(16);

  cout << "myqueue.front() is now " << myqueue.front() << endl;
  myqueue.front() -= myqueue.back();    // 77-16=61
  cout << "myqueue.front() is now " << myqueue.front() << endl;
  return 0;
}
