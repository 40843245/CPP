#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

template <class T>
void PrintUnorderedMultiset(std::unordered_multiset<T> ums)
{
  for (const std::string& x: ums)
  {
      cout << " " << x;
  }
   cout << endl; 
}
int main ()
{
  std::unordered_multiset<std::string> myums;
  myums.reserve(5);

  myums.insert("klingon");
  myums.insert("human");
  myums.insert("vulcan");
  myums.insert("klingon");
  myums.insert("klingon");

  cout << "myums contains:";
  PrintUnorderedMultiset(myums);
  cout<<"-------"<<endl;
  return 0;
}
