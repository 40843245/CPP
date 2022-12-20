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
void CheckEmpty(list<int> li)
{
    if(li.empty())
    {
        cout<<"the list is empty."<<endl;
    }
    else
    {
         cout<<"the list is NOT empty."<<endl;
         PrintList(li);
    }
}
int main ()
{
  std::list<int> mylist;
  int total=0;
  
  CheckEmpty(mylist);
  for (int i=1;i<=10;++i) 
  {
      mylist.push_back(i);
  }
  
  CheckEmpty(mylist);
  while (!mylist.empty())
  {
     total += mylist.front();
     mylist.pop_front();
  }

  CheckEmpty(mylist);
  cout << "total: " << total << endl;
  return 0;
}
