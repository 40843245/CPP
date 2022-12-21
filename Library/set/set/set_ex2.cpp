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
  int myints[] = {75,23,65,42,13};
  std::set<int> myset (myints,myints+sizeof(myints)/sizeof(myints[0]));

  cout << "myset contains:";
  PrintSet(myset);
  return 0;
}
