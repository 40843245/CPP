#include <iostream>
#include <map>
using namespace std;

template <class T1,class T2>
void PrintMap_key_comp(map<T1,T2> mymap,typename map<T1,T2>::key_compare mycomp,typename map<T1,T2>::iterator it,T1 tar)
{
  mycomp = mymap.key_comp();  
  it = mymap.begin();
  do 
  {
    cout << it->first << " => " << it->second << endl;
  } while ( mycomp((*it++).first, tar) );
  cout << endl;
}
int main ()
{
  std::map<char,int> mymap;
  
  mymap['a']=100;
  mymap['b']=200;
  mymap['c']=300;
  
  char highest = mymap.rbegin()->first;
  cout << "mymap contains:"<<endl;
  
  PrintMap_key_comp<char,int>(mymap, mymap.key_comp(),mymap.begin(),highest);
  return 0;
}
