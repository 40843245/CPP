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
  std::unordered_map<std::string,std::string> mymap = 
  {
            {"house","maison"},
            {"apple","pomme"},
            {"tree","arbre"},
            {"book","livre"},
            {"door","porte"},
            {"grapefruit","pamplemousse"}
  };

  unsigned n = mymap.bucket_count();

  cout << "mymap has " << n << " buckets."<<endl;
  for (unsigned i=0; i<n; ++i) 
  {
    cout << "bucket #" << i << " contains: ";
    PrintUnorederedMap2(mymap);
  }

  return 0;
}
