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
  std::vector<int> myvector;
  int myint;

  cout<<"myvector contains:"<<endl;
  PrintVector(myvector);
  cout<<"---------"<<endl;
  
  cout << "Please enter some integers (enter 0 to end):"<<endl;
  do {
    cin >> myint;
    myvector.push_back (myint);
  } while (myint);
  
  cout<<"myvector contains:"<<endl;
  PrintVector(myvector);
  cout<<"---------"<<endl;
  return 0;
}
