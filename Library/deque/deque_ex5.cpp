#include <iostream>
#include <deque>
using namespace std;

void PrintDeque1(deque<int> deq)
{
  cout<<"Use first way:"<<endl;
  for (std::deque<int>::iterator it = deq.begin(); it!=deq.end(); ++it)
  {
    cout << ' ' << (*it);
  }	
  cout<<endl;
}

void CheckEmpty(deque<int> deq)
{
	if(deq.empty())
	{
		cout<<"the deque is empty."<<endl;
	}else
	{
		cout<<"the deque is NOT empty."<<endl;
		PrintDeque1(deq);
	}
}

int main ()
{
  std::deque<int> mydeque;
  int sum=0;
  CheckEmpty(mydeque);
  cout<<"----------"<<endl;
  for (int i=1;i<=10;i++) mydeque.push_back(i);
  CheckEmpty(mydeque);
  cout<<"----------"<<endl;
  mydeque.erase (mydeque.begin(),mydeque.begin()+3);
  CheckEmpty(mydeque);
  cout<<"----------"<<endl;
  while (!mydeque.empty())
  {
     sum += mydeque.front();
     mydeque.pop_front();
  }
  CheckEmpty(mydeque);
  cout<<"----------"<<endl;
  cout << "total: " << sum << endl;
  cout<<"----------"<<endl;
  return 0;
}
