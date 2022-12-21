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
  std::unordered_multiset<std::string>
     first = {"cow","chicken","pig","pig"},
     second  = {"wolf","rabbit","rabbit"};

  cout << "first:";
  PrintUnorderedMultiset(first);
  cout << "second:";
  PrintUnorderedMultiset(second);
  cout<<"---------"<<endl;

  first.swap(second);

  cout << "first:";
  PrintUnorderedMultiset(first);
  cout << "second:";
  PrintUnorderedMultiset(second);
  cout<<"---------"<<endl;

  return 0;
}
