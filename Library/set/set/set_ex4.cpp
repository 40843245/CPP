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
void CountElemInSet(set<T1> se,T1 tar)
{
    T1 cnt=se.count(tar);
    cout<<"There are "<<cnt<<" times of "<<tar<<" in the set."<<endl;
}
int main ()
{
  std::set<int> myset;
  for (int i=1; i<5; ++i)
  { 
      myset.insert(i*3);
  }

  PrintSet(myset);
  cout<<"---------------"<<endl;
  for (int i=0; i<10; ++i)
  {
      CountElemInSet(myset,i);  
  }
  cout<<"---------------"<<endl;
  PrintSet(myset);
  cout<<"---------------"<<endl;
  return 0;
}
