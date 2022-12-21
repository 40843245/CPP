#include <iostream>
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
  std::unordered_map<std::string,std::string> mymap;
  mymap = {{"Australia","Canberra"},{"U.S.","Washington"},{"France","Paris"}};

  cout << "mymap contains:";
  PrintUnorederedMap2(mymap);

  cout << "mymap's buckets contain:"<<endl;
  for ( unsigned i = 0; i < mymap.bucket_count(); ++i) 
  {
    cout << "bucket #" << i << " contains:";
    PrintUnorederedMap2(mymap);
  }

  return 0;
}
