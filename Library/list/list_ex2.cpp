#include <iostream>
#include <list>
using namespace std;

void PrintList(list<int> li)
{
  for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
  {
      cout << (*it) << ' ';  
  }
  cout<<endl;
}
int main ()
{
  std::list<int> first;                                // empty list of ints
  std::list<int> second (4,100);                       // four ints with value 100
  std::list<int> third (second.begin(),second.end());  // iterating through second
  std::list<int> fourth (third);                       // a copy of third
  int myints[] = {16,2,77,29};
  std::list<int> fifth (myints, myints + sizeof(myints) / sizeof(myints[0]) );
  
  cout<<"first contains:";
  PrintList(first);
  cout<<"second contains:";
  PrintList(second);
  cout<<"third contains:";
  PrintList(third);
  cout<<"fourth contains:";
  PrintList(fourth);
  cout<<"fifth contains:";
  PrintList(fifth);
  cout<<"--------"<<endl;
  
  fifth=fourth;
  
  third.assign(first.begin(),first.end());
  
  second.assign(myints,myints+sizeof(myints)/sizeof(myints[0]));
  
  cout<<"first contains:";
  PrintList(first);
  cout<<"second contains:";
  PrintList(second);
  cout<<"third contains:";
  PrintList(third);
  cout<<"fourth contains:";
  PrintList(fourth);
  cout<<"fifth contains:";
  PrintList(fifth);
  cout<<"--------"<<endl;
  
  
  return 0;
}
