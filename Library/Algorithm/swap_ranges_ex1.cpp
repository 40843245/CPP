#include <iostream>
#include <algorithm> //for swap_ranges
#include <vector>
using namespace std;

template <class T1>
void PrintVector(vector<T1> vec)
{
  typename std::vector<T1>::iterator it;
  for(it = vec.begin(); it != vec.end(); ++it)
  {
    cout <<" "<< (*it);
  }
  cout << endl;
}

int main () 
{
  std::vector<int> foo (5,10);        // foo: 10 10 10 10 10
  std::vector<int> bar (5,33);        // bar: 33 33 33 33 33

  cout<<"Before swap in ranges,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"-----------"<<endl;

  std::swap_ranges(foo.begin()+1, foo.end()-1, bar.begin());

  cout<<"After swap in ranges,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"-----------"<<endl;
  return 0;
}
