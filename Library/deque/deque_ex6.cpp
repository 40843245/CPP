#include <iostream>
#include <deque>
using namespace std;
int main ()
{
  std::deque<int> mydeque;
  int * p;
  unsigned int i;

  p = mydeque.get_allocator().allocate(5);
  mydeque.resize(5);
  cout<<"mydeque.size():"<<mydeque.size()<<end;
  for (i=0; i<mydeque.size(); i++) 
  {
      mydeque.get_allocator().construct(&p[i],i*i);
  }

  std::cout << "The allocated array contains:";
  for (i=0; i<mydeque.size(); i++) 
  {
      cout << ' ' << p[i];
  }
  cout << endl;

  for (i=0; i<5; i++) 
  {
      mydeque.get_allocator().destroy(&p[i]);
  }
  mydeque.get_allocator().deallocate(p,5);

  return 0;
}
