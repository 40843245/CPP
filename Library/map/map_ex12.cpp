// accessing mapped values
#include <iostream>
#include <map>
#include <string>
using namespace std;

template <class T1,class T2>
map<T1,T2> PrintElem(map<T1,T2> mymap,T1 tar,string name)
{
    cout<<name<<"["<<tar<<"]="<<mymap[tar]<<endl;
    return mymap;
}
int main ()
{
  std::map<char,std::string> mymap;

  mymap['a']="an element";
  mymap['b']="another element";
  mymap['c']=mymap['b'];

  mymap=PrintElem(mymap,'a',"mymap");
  mymap=PrintElem(mymap,'b',"mymap");
  mymap=PrintElem(mymap,'c',"mymap");
  mymap=PrintElem(mymap,'d',"mymap");
  cout << "mymap now contains " << mymap.size() << " elements."<<endl;
  
  std::map<char,int> mymap2;
  cout << "mymap2 now contains " << mymap2.size() << " elements."<<endl;
  mymap2=PrintElem(mymap2,'d',"mymap2");
  mymap2['a']=100;
  mymap2['b']=2;
  mymap2['e']+=1;
  mymap2=PrintElem(mymap2,'d',"mymap2");
  mymap2=PrintElem(mymap2,'e',"mymap2");
  cout << "mymap2 now contains " << mymap2.size() << " elements."<<endl;
  return 0;
}

