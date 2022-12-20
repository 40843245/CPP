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
void PrintDeque2(deque<int> deq)
{
  cout<<"Use second way:"<<endl;
  for (int i=0;i<deq.size();i++)
  {
    cout << ' ' <<deq[i];
  }	
}
void PrintDeque3(deque<int> deq)
{
  cout<<"Use thrid way:"<<endl;
  for (int i=0;i<deq.size();i++)
  {
    cout << ' ' <<deq.at(i);
  }
  cout<<endl;
}

void PrintDeque(deque<int> deq)
{
  PrintDeque1(deq);
  PrintDeque2(deq);
  PrintDeque3(deq); 	
}

int main ()
{
  unsigned int i;

  // constructors used in the same order as described above:
  std::deque<int> first;                                // empty deque of ints
  std::deque<int> second (4,100);                       // four ints with value 100
  std::deque<int> third (second.begin(),second.end());  // iterating through second
  std::deque<int> fourth (third);                       // a copy of third

 
  // the iterator constructor can be used to copy arrays:
  int myints[] = {16,2,77,29};
  std::deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  cout<<"second:"<<endl;
  PrintDeque(second);
  
  second.assign(4,20);
  cout<<"second:"<<endl;
  PrintDeque(second);
  
  cout<<"third:"<<endl;
  PrintDeque(third);
  
  third=second;
  
  cout<<"third:"<<endl;
  PrintDeque(third);
  return 0;
}
