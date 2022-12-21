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
  std::map<char,int> foo,bar;

  foo['x']=100;
  foo['y']=200;

  bar['a']=11;
  bar['b']=22;
  bar['c']=33;

  cout<<"Before swap,"<<endl;
  cout << "foo contains:"<<endl;
  PrintMap(foo);
  cout << "bar contains:"<<endl;
  PrintMap(bar);
  cout<<"~~~~~~~~~~~"<<endl;
  
  foo.swap(bar);

  cout<<"After swap,"<<endl;
  cout << "foo contains:"<<endl;
  PrintMap(foo);
  cout << "bar contains:"<<endl;
  PrintMap(bar);
  cout<<"~~~~~~~~~~~"<<endl;
  return 0;
}
