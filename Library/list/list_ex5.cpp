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
  std::list<int> mylist;
  int myint=0;
  cout << "Please enter some integers (enter 0 to end):"<<endl;
  do 
  {
    cin >> myint;
    mylist.push_back(myint);
  }while (myint);
  cout << "mylist stores " << mylist.size() << " numbers."<<endl;
  PrintList(mylist);
  cout<<"----"<<endl;
    
  cout << "Please enter some integers (enter 0 to end):"<<endl;
  do 
  {
    cin >> myint;
    mylist.push_front(myint);
  }while (myint);
  cout << "mylist stores " << mylist.size() << " numbers."<<endl;
  PrintList(mylist);
  cout<<"----"<<endl;


  return 0;
}
