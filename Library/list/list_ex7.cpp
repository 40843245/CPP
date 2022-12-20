#include <iostream>
#include <cmath>
#include <list>
using namespace std;

// a binary predicate implemented as a function:
bool same_integral_part (double first, double second)
{ return ( int(first)==int(second) ); }

// a binary predicate implemented as a class:
struct is_near 
{
  bool operator() (double first, double second)
  { return (fabs(first-second)<5.0); }
};

void PrintList(list<double> li)
{
  std::list<double>::iterator it;
  for(it=li.begin();it!=li.end();it++)
  {
      cout<<" "<<(*it);
  }
  cout<<endl;
}

int main ()
{
  double mydoubles[]={ 12.15,  2.72, 73.0,  12.77,  3.14,12.77, 73.35, 72.25, 15.3,  72.25 };
  std::list<double> mylist (mydoubles,mydoubles+sizeof(mydoubles)/sizeof(mydoubles[0]));
  
  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"-----"<<endl;
  
  mylist.sort();
  
  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"-----"<<endl;
  
  mylist.unique();

  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"-----"<<endl;
  
  mylist.unique (same_integral_part);
  
  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"-----"<<endl;
  
  mylist.unique (is_near());
  
  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"-----"<<endl;
  return 0;
}
