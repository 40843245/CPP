#include <iostream>
#include <map>
using namespace std;

template <class T1,class T2>
void PrintMap(map<T1,T2> mymap)
{
  
  std::map<char,int>::iterator it;
  for (it=mymap.begin(); it!=mymap.end(); ++it)
  {
    cout << it->first << " => " << it->second << endl;
  }  
}

template <class T1,class T2>
void PrintReverseMap(map<T1,T2> mymap)
{
  // show content:
  std::map<char,int>::reverse_iterator rit;
  for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
  {
    cout << rit->first << " => " << rit->second << endl;
  }  
}
int main ()
{
  std::map<char,int> mymap;
  mymap['x'] = 100;
  mymap['y'] = 200;
  mymap['z'] = 300;
  PrintMap(mymap);  
  cout<<"-----------"<<endl;
  PrintReverseMap(mymap);  
  cout<<"-----------"<<endl;
  return 0;
}
