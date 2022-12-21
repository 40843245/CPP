#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

template <class T1,class T2>
void PrintUnorderedMap(std::unordered_map<T1,T2> unordmap)
{
  for (auto& x: unordmap) 
  {
      cout << x.first << " (" << x.second << "), ";
  }
  cout <<endl;   
}
int main ()
{
  std::unordered_map<std::string,std::string>
     first = {{"Star Wars","G. Lucas"},{"Alien","R. Scott"},{"Terminator","J. Cameron"}},
     second  = {{"Inception","C. Nolan"},{"Donnie Darko","R. Kelly"}};

  cout << "first: ";
  PrintUnorderedMap(first);
  cout << "second: ";
  PrintUnorderedMap(first);
  cout<<"-------"<<endl;

  first.swap(second);

  cout << "first: ";
  PrintUnorderedMap(first);
  cout << "second: ";
  PrintUnorderedMap(first);
  cout<<"-------"<<endl;

  return 0;
}
