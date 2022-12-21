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

int main ()
{
  std::set<int> myset;
  std::set<int>::iterator it;
  for (int i=1; i<=5; i++) 
  {
      myset.insert(i*10);
  }
 
  cout << "myset contains:";
  PrintSet(myset);
  cout<<"------------"<<endl;
 
  it=myset.find(20);
  myset.erase (it);
 
  cout << "myset contains:";
  PrintSet(myset);
  cout<<"------------"<<endl;
 
  it=myset.find(40);
  myset.erase (it);
  
  cout << "myset contains:";
  PrintSet(myset);
  cout<<"------------"<<endl;  
  
  it=myset.find(60);
  if(it==myset.end())
  {
    cout<<"NOT found."<<endl;   
  }
  
  cout << "myset contains:";
  PrintSet(myset);
  cout<<"------------"<<endl;
  return 0;
}
