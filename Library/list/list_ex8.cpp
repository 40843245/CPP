#include <iostream>
#include <list>
using namespace std;

void PrintList(list<int> li)
{
  std::list<int>::iterator it;
  for(it=li.begin();it!=li.end();it++)
  {
      cout<<" "<<(*it);
  }
  cout<<endl;
}

int main ()
{
  std::list<int> first (3,100);   // three ints with a value of 100
  std::list<int> second (5,200);  // five ints with a value of 200
  
  cout<<"Before swap,"<<endl;
  std::cout << "first contains:";
  PrintList(first);  
  cout<<"-------------"<<endl;
  std::cout << "second contains:";
  PrintList(second);
  cout<<"-------------"<<endl;

  first.swap(second);

  cout<<"~~~~~~"<<endl;
  cout<<"After swap,"<<endl;
  std::cout << "first contains:";
  PrintList(first);  
  cout<<"-------------"<<endl;
  std::cout << "second contains:";
  PrintList(second);
  cout<<"-------------"<<endl;
  return 0;
}
