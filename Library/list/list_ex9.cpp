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

void PrintLists(list<int> li1,list<int> li2)
{
  cout << "mylist1 contains:";
  PrintList(li1);
  cout << "mylist2 contains:";
  PrintList(li2);
  cout<<"------------"<<endl;
}
int main ()
{
  std::list<int> mylist1, mylist2;
  std::list<int>::iterator it;

  for (int i=1; i<=4; ++i)
  {
     mylist1.push_back(i);
  }
  
  for (int i=1; i<=3; ++i)
  {
     mylist2.push_back(i*10);   // mylist2: 10 20 30
  }
  
  it = mylist1.begin();
  ++it;                         // points to 2

  mylist1.splice (it, mylist2); // mylist1: 1 10 20 30 2 3 4
                                // mylist2 (empty)
                                // "it" still points to 2 (the 5th element)
  
  PrintLists(mylist1,mylist2);                                        
  mylist2.splice (mylist2.begin(),mylist1, it);
                                // mylist1: 1 10 20 30 3 4
                                // mylist2: 2
                                // "it" is now invalid.
                                
  PrintLists(mylist1,mylist2);
  
  it = mylist1.begin();
  std::advance(it,3);           // "it" points now to 30

  mylist1.splice ( mylist1.begin(), mylist1, it, mylist1.end());
                                // mylist1: 30 3 4 1 10 20

  PrintLists(mylist1,mylist2);

  return 0;
}
