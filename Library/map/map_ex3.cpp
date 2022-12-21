#include <iostream>
#include <map>
using namespace std;

template <class T1,class T2>
void PrintMap(map<T1,T2> mymap)
{
 // show content:
  for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
  {
      cout << it->first << " => " << it->second << endl;    
  }
}
int main ()
{
  std::map<char,int> mymap;
  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  PrintMap(mymap);
  cout<<"---------"<<endl;
  
  mymap.clear();
  
  PrintMap(mymap);
  cout<<"---------"<<endl;
  return 0;
}
