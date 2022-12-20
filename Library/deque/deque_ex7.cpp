#include <iostream>
#include <deque>
using namespace std;
int main ()
{
  unsigned int i;
  std::deque<int> mydeque;

  cout << "Enter number of elements: ";
  cin >> i;

  if (i<mydeque.max_size()) 
  {
      mydeque.resize(i);
  }
  else 
  {
      cout << "That size exceeds the limit."<<endl;
  }
  cout<<"Bye Bye!!!"<<endl;
  return 0;
}
