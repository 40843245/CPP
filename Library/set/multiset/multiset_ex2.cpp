#include <iostream>
#include <set>
using namespace std;

template <class T1>
void PrintMultiset(multiset<T1> multise)
{
    typename std::multiset<T1>::iterator it;
    for (it=multise.begin(); it!=multise.end(); ++it)
    {
      cout <<" "<< (*it);
    }
    cout << endl;
}

int main ()
{
  std::multiset<int> mymultiset;
  std::multiset<int>::iterator itlow,itup;

  for (int i=1; i<8; i++) 
  {
      mymultiset.insert(i*10);
  }
  
  cout << "mymultiset contains:";
  PrintMultiset(mymultiset);
  cout<<"----------"<<endl;

  itlow = mymultiset.lower_bound (30);
  itup = mymultiset.upper_bound (40);
  mymultiset.erase(itlow,itup);                    

  cout << "mymultiset contains:";
  PrintMultiset(mymultiset);
  cout<<"----------"<<endl;
  return 0;
}
