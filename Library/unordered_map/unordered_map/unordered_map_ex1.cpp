// constructing unordered_maps
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
  stringmap first;                              // empty
  stringmap second ( {{"apple","red"},{"lemon","yellow"}} );       // init list
  stringmap third ( {{"orange","orange"},{"strawberry","red"}} );  // init list
  stringmap fourth (second);                    // copy
  stringmap fifth (merge(third,fourth));        // move
  stringmap sixth (fifth.begin(),fifth.end());  // range

  cout << "sixth contains:";
  PrintUnorederedMap(sixth);

  return 0;
}
