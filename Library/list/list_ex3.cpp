#include <iostream>
#include <list>
using namespace std;

void PrintArray(int *a)
{
  for (int i=0; i<(sizeof(a)/sizeof(a[0])); ++i)
  {
      cout <<"a["<<i<<"]=" << a[i];
  }
  cout << endl;  
}
int main ()
{
  std::list<int> mylist;
  int * p;
  cout << "The allocated array contains:";
  PrintArray(p);
  cout<<"--------"<<endl;
  
  p=mylist.get_allocator().allocate(5);
  
    cout << "The allocated array contains:";
  PrintArray(p);
  cout<<"--------"<<endl;
  
  for (int i=0; i<5; ++i)
  {
      p[i]=i;
  }
  
  cout << "The allocated array contains:";
  PrintArray(p);
  cout<<"--------"<<endl;
  mylist.get_allocator().deallocate(p,5);
  return 0;
}
