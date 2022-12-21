#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

typedef std::unordered_multimap<std::string,std::string> stringmap;

stringmap merge (stringmap a,stringmap b) 
{
  stringmap temp(a); temp.insert(b.begin(),b.end()); return temp;
}

template <class T1,class T2>
void PrintUnorderedMultimap(std::unordered_multimap<T1,T2> umm)
{
  for(auto it=umm.begin();it!=umm.end();it++)
  {
      cout << "(" << it->first<<","<<it->second<<")"<<endl;
  }
   cout << endl; 
}

int main ()
{
  stringmap first, second, third;
  first = {{"apple","red"},{"lemon","yellow"}};     // init list
  second = {{"banana","yellow"},{"apple","green"}}; // init list
  third = merge(first,second);                      // move
  first = third;                                    // copy

  cout << "first contains:";
  PrintUnorderedMultimap(first);
  cout << "second contains:";
  PrintUnorderedMultimap(second);
  cout << "thrid contains:";
  PrintUnorderedMultimap(third);
  cout<<"------------"<<endl;
  return 0;
}
