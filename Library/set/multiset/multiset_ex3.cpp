#include <iostream>
#include <set>
using namespace std;

void PrintArray(int *a)
{
  for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++)
  {
      cout <<" "<< a[i];
  }
  cout << endl;
}

int main ()
{
  std::multiset<int> mymultiset;
  int * p;
  unsigned int i;

  p=mymultiset.get_allocator().allocate(5);
  
  for (i=0; i<5; i++) 
  {
      p[i]=(i+1)*10;
  }
  cout << "The allocated array contains:";
  PrintArray(p);
  
  mymultiset.get_allocator().deallocate(p,5);
  return 0;
}
