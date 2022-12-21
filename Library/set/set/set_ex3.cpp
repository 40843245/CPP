#include <iostream>
#include <set>
using namespace std;

template <class T1>
void PrintSet(set<T1> se)
{
    typename std::set<T1>::iterator it;
    for (it=se.begin(); it!=se.end(); ++it)
    {
        cout <<" "<< (*it);
    }
    cout << endl;
}

template <class T1>
void CheckEmpty(set<T1> se)
{
  if(se.empty())
  {
    cout<<"The set is empty."<<endl;   
  }else
  {
    cout<<"The set is NOT empty."<<endl;  
    PrintSet(se);
  }
}

template <class T1>
set<T1> ClearSet_onebyone(set<T1> se)
{
  while (!se.empty())
  {
     se.erase(se.begin());
  }  
  return se;
}
int main ()
{
  std::set<int> myset;
  myset.insert(20);
  myset.insert(30);
  myset.insert(10);

  CheckEmpty(myset);
  cout<<"-----------"<<endl;
  
  myset=ClearSet_onebyone(myset);
  
  CheckEmpty(myset);
  cout<<"-----------"<<endl;
  return 0;
}


