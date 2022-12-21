#include <iostream>
#include <map>
using namespace std;

template <class T1,class T2>
void PrintMap_Iteration(map<T1,T2> mymap)
{
    typename std::pair<T1,T2> highest = *mymap.rbegin();
    typename std::map<T1,T2>::iterator it = mymap.begin();
    do {
    cout << it->first << " => " << it->second << endl;
  } while ( mymap.value_comp()(*it++, highest) );

}
int main ()
{
  std::map<char,int> mymap;

  mymap['x']=1001;
  mymap['y']=2002;
  mymap['z']=3003;
  
  cout << "mymap contains:"<<endl;
  PrintMap_Iteration(mymap);
  cout<<"-------------"<<endl;
  return 0;
}
