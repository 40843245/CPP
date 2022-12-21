#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

template <class T1,class T2>
void PrintUnorederedMap(std::unordered_map<T1,T2> unordmap)
{
  for (auto& x: unordmap) 
  {
      cout << " " << x.first << ":" << x.second;
  }
  cout << endl;  
}
int main ()
{
  std::unordered_map<std::string,int> mymap = {
                { "Mars", 3000},
                { "Saturn", 60000},
                { "Jupiter", 70000 } };

  mymap.at("Mars") = 3396;
  mymap.at("Saturn") += 272;
  mymap.at("Jupiter") = mymap.at("Saturn") + 9638;

 PrintUnorederedMap(mymap);  

  return 0;
}
