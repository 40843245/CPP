#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

typedef std::unordered_map<std::string,std::string> stringmap;

stringmap merge (stringmap a,stringmap b) 
{
  stringmap temp(a); temp.insert(b.begin(),b.end()); return temp;
}

template <class T1,class T2>
void PrintUnorederedMap(std::unordered_map<T1,T2> unordmap)
{
  for (auto& x: unordmap) 
  {
      std::cout << " " << x.first << ":" << x.second;
  }
  cout << endl;  
}

int main ()
{
  stringmap first, second, third;
  first = {{"AAPL","Apple"},{"MSFT","Microsoft"}};  // init list
  second = {{"GOOG","Google"},{"ORCL","Oracle"}};   // init list
  third = merge(first,second);                      // move
  first = third;                                    // copy

  cout << "first contains:";
  PrintUnorederedMap(first);

  return 0;
}
