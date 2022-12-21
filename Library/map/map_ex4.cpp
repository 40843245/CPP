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

template <class T1,class T2>
void CheckMap(map<T1,T2> mymap)
{
    if(mymap.empty())
    {
      cout<<"The map is empty."<<endl;
    }else
    {
      cout<<"The map is NOT empty."<<endl;
      PrintMap(mymap);
    }
}

template <class T1,class T2>
void PrintAndClearMap(map<T1,T2> mymap)
{
  while (!mymap.empty())
  {
    cout << mymap.begin()->first << " => " << mymap.begin()->second << endl;
    mymap.erase(mymap.begin());
  }    
}

int main ()
{
  std::map<char,int> mymap;

  mymap['a']=10;
  mymap['b']=20;
  mymap['c']=30;

  CheckMap(mymap);
  cout<<"-----"<<endl;

  PrintAndClearMap(mymap);
  cout<<"-----"<<endl;
  
  CheckMap(mymap);
  cout<<"-----"<<endl;
  return 0;
}
