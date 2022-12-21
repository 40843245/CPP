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
  std::unordered_map<std::string,double> mymap = 
  {
     {"mom",5.4},
     {"dad",6.1},
     {"bro",5.9} 
  };

  std::string input;
  std::cout << "who? ";
  getline (std::cin,input);

  std::unordered_map<std::string,double>::const_iterator got = mymap.find (input);

  cout<<"mymap contains:"<<endl;
  PrintUnorederedMap2(mymap);
  if ( got == mymap.end() )
    std::cout << "not found";
  else
    std::cout << got->first << " is " << got->second;
  return 0;
}
