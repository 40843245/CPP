#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

template<class T>
T cmerge (T a, T b) 
{
  T t(a); t.insert(b.begin(),b.end()); return t;
}

template <class T>
void PrintUnorderedset(std::unordered_set<T> unordset)
{
    for (auto& x: unordset) 
    {
        cout << " " << x;
    }
    cout << endl;    
}
int main ()
{
  std::unordered_set<std::string> first, second, third;
  first = {"red","green","blue"};      // init list
  second = {"orange","pink","yellow"}; // init list
  third = cmerge (first, second);      // move
  first = third;                       // copy

  cout << "first contains:";
  PrintUnorderedset(first);
  cout << "second contains:";
  PrintUnorderedset(second);
  cout << "third contains:";
  PrintUnorderedset(third);
  cout<<"-------------"<<endl;
  return 0;
}
