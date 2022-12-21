#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

template <class T>
void PrintUnorderedset(std::unordered_set<T> unordset)
{
    for(auto it=unordset.begin();it!=unordset.end();it++)
    {
      cout<<" "<<(*it);
    }
    cout<<endl;
}

int main ()
{
  std::unordered_set<std::string> myset;

  myset.reserve(5);

  myset.insert("office");
  myset.insert("house");
  myset.insert("gym");
  myset.insert("parking");
  myset.insert("highway");

  cout << "myset contains:";
  PrintUnorderedset(myset);
  cout<<"----------"<<endl;
  return 0;
}
