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
  std::vector<int> first;                                // empty vector of ints
  std::vector<int> second (4,100);                       // four ints with value 100
  std::vector<int> third (second.begin(),second.end());  // iterating through second
  std::vector<int> fourth (third);                       // a copy of third

  int myints[] = {16,2,77,29};
  std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(myints[0]) );

  cout << "first contains";
  PrintVector(first);
  
  cout << "second contains";
  PrintVector(second);
  
  cout << "third contains";
  PrintVector(third);
  
  cout << "fourth contains";
  PrintVector(fourth);

  cout << "fifth contains";
  PrintVector(fifth);
  cout<<"-------"<<endl;
  return 0;
}
