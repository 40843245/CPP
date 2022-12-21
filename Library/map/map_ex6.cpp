#include <iostream>
#include <map>
using namespace std;

template <class T1,class T2>
void FindElemInMap(map<T1,T2> mymap,T1 tar)
{
    std::map<char,int>::iterator it;
    it=mymap.find(tar);
    if(it==mymap.end())
    {
      cout<<tar;
      cout<<" is NOT found."<<endl;
    }else
    {
      cout<<tar;
      cout<<" is found."<<endl;
      cout<<"Its value is "<<it->second<<endl;
    }
}

int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;
  
  FindElemInMap(mymap,'b');
  cout<<"----------"<<endl;
  FindElemInMap(mymap,'d');
  cout<<"----------"<<endl;  
  FindElemInMap(mymap,'e');
  cout<<"----------"<<endl;  
  return 0;
}
