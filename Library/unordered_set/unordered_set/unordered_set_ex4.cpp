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
  std::unordered_set<std::string> myset = { "red","green","blue" };

  string input;
  cout << "color? ";
  getline (std::cin,input);
  std::unordered_set<std::string>::const_iterator got = myset.find (input);
  
  cout<<"myset contains:"<<endl;
  PrintUnorderedset(myset);
  cout<<"----------"<<endl;
  
  if ( got == myset.end() )
    std::cout << "not found in myset";
  else
    std::cout << *got << " is in myset";

  std::cout << std::endl;

  return 0;
}
