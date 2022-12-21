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
  std::unordered_map<std::string,std::string> mymap;

  // populating container:
  mymap["U.S."] = "Washington";
  mymap["U.K."] = "London";
  mymap["France"] = "Paris";
  mymap["Russia"] = "Moscow";
  mymap["China"] = "Beijing";
  mymap["Germany"] = "Berlin";
  mymap["Japan"] = "Tokyo";

  // erase examples:
  mymap.erase ( mymap.begin() );      // erasing by iterator
  mymap.erase ("France");             // erasing by key
  mymap.erase ( mymap.find("China"), mymap.end() ); // erasing by range

  cout<<"mymap contains:"<<endl;
  PrintUnorederedMap2(mymap);
  cout<<endl;
  return 0;
}
