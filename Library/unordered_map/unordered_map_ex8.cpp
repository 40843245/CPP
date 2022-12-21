#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

template <class T1,class T2>
void PrintUnorederedMap2(std::unordered_map<T1,T2> unordmap)
{
  for (auto it=unordmap.begin();it!=unordmap.end();it++) 
  {
      cout << " " << it->first << ":" << it->second;
  }
  cout << endl;  
}

int main ()
{
  std::unordered_map<std::string,std::string> mymap =
         { {"house","maison"}, {"car","voiture"}, {"grapefruit","pamplemousse"} };

  cout << "mymap contains:";
  PrintUnorederedMap2(mymap);
  cout<<"----------"<<endl;

  mymap.clear();
  mymap["hello"]="bonjour";
  mymap["sun"]="soleil";

  cout << "mymap contains:";
  PrintUnorederedMap2(mymap);
  cout<<"----------"<<endl;

  return 0;
}
