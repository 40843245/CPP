#include <iostream>
#include <forward_list>
using namespace std;

void PrintForwardList(forward_list<int> fl)
{
    for (int& x: fl)  
    {
        cout << " " << x; 
    }
    cout <<endl;
}

void PrintForwardList_Begin(forward_list<int> fl)
{
    int i=0;
    std::forward_list<int>::iterator it;
    for (i=0,it=fl.begin();it!=fl.end();it++,i++)  
    {
        if(i==0)
        {
          continue;   
        }
        cout << " " << (*it); 
    }
    cout <<endl;
}

void PrintForwardList_BeforeBegin(forward_list<int> fl)
{
    int i=0;
    std::forward_list<int>::iterator it;
    for (i=0,it=fl.before_begin();it!=fl.end();it++,i++)  
    {
        if(i==0)
        {
          continue;   
        }
        cout << " " << (*it); 
    }
    cout <<endl;
}

int main ()
{
  std::forward_list<int> mylist = { 34, 77, 16, 2 };

  cout << "mylist contains:";
  PrintForwardList(mylist);
  cout<<"---------------"<<endl;
  cout << "mylist contains(from 1):";
  PrintForwardList_Begin(mylist);
  cout<<"---------------"<<endl;
  cout << "mylist contains(from 0):";
  PrintForwardList_BeforeBegin(mylist);
  cout<<"---------------"<<endl;
  
  return 0;
}
