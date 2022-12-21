#include <iostream>
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
  std::vector<int> foo (3,100);   // three ints with a value of 100
  std::vector<int> bar (5,200);   // five ints with a value of 200

  cout<<"Before swap,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"---------"<<endl;

  foo.swap(bar);

  cout<<"After swap,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"---------"<<endl;
  return 0;
}
