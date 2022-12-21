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
  std::vector<int> myvector (5);
  int* p = myvector.data();


  cout<<"Before changing,"<<endl;
  cout << "myvector contains:";
  PrintVector(myvector);
  cout<<"--------"<<endl;
  
  *p = 10;
  ++p;
  *p = 20;
  p[2] = 100;

  cout<<"After changing,"<<endl;
  cout << "myvector contains:";
  PrintVector(myvector);
  cout<<"--------"<<endl;

  return 0;
}
