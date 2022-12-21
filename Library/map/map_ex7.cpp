#include <iostream>
#include <map>
using namespace std;

int main ()
{
  int psize;
  std::map<char,int> mymap;
  std::pair<const char,int>* p;

  // allocate an array of 5 elements using mymap's allocator:
  p=mymap.get_allocator().allocate(5);

  // assign some values to array
  psize = sizeof(std::map<char,int>::value_type)*5;

  cout << "The allocated array has a size of " << psize << " bytes."<<endl;

  mymap.get_allocator().deallocate(p,5);

  return 0;
}
