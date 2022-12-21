#include <iostream>
#include <map>
using namespace std;

template <class T1,class T2>
void PrintMap_Iteration(map<T1,T2> mymap)
{
    for (auto& x: mymap)
    {
        cout << " [" << x.first << ':' << x.second << ']';
    }
    cout << endl;   
}
int main ()
{
  std::map<char,int> mymap;
  auto it = mymap.end();

  it = mymap.emplace_hint(it,'b',10);
  mymap.emplace_hint(it,'a',12);
  mymap.emplace_hint(mymap.end(),'c',14);

  cout << "mymap contains:";
  PrintMap_Iteration(mymap);
  return 0;
}
