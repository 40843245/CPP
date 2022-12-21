#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  std::vector<int> myvector;
  int * p;
  unsigned int i;
  int n=5;
  // allocate an array with space for 5 elements using vector's allocator:
  p = myvector.get_allocator().allocate(n);

  // construct values in-place on the array:
  for (i=0; i<n; i++) 
  {
      myvector.get_allocator().construct(&p[i],i*i);
  }

  cout << "The allocated array contains:";
  for (i=0; i<n; i++) 
  {
      cout <<" "<< p[i];
  }
  cout << endl;

  // destroy and deallocate:
  for (i=0; i<n; i++) 
  {
      myvector.get_allocator().destroy(&p[i]);
  }
  myvector.get_allocator().deallocate(p,n);
  return 0;
}
