#include <iostream>
#include <deque>
using namespace std;

void PrintDeque(deque<int> deq)
{
    for(int i=0;i<deq.size();i++)
    {
        cout<<" "<<deq[i];
    }
    cout<<endl;
}
int main ()
{
  std::deque<int> mydeque;
  int myint;

  cout << "Please enter some integers (enter 0 to end):"<<endl;

  do {
    cin >> myint;
    mydeque.push_back (myint);
  } while (myint);
  
  cout << "mydeque stores " << (int) mydeque.size() << " numbers."<<endl;
  PrintDeque(mydeque);
  cout<<"-----------"<<endl;
  
  do {
    cin >> myint;
    mydeque.push_front (myint);
  } while (myint);
  
  cout << "mydeque stores " << (int) mydeque.size() << " numbers."<<endl;
  PrintDeque(mydeque);
  cout<<"-----------"<<endl;
  return 0;
}
