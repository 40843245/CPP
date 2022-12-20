#include <iostream>
#include <forward_list>
using namespace std;

void PrintForwardList(forward_list<int> fl)
{
    for (int& x: fl)  
    {
        cout << " " << x; 
    }
    cout <<endl;
}

int main ()
{
  std::forward_list<int> first;
  std::forward_list<int> second;

  first.assign (4,15);                           
  second.assign (first.begin(),first.end()); 
  
  cout << "first contains: ";
  PrintForwardList(first);
  cout << "second contains: ";
  PrintForwardList(second);
  
  first.assign ( {77, 2, 16} );

  cout << "first contains: ";
  PrintForwardList(first);
  cout << "second contains: ";
  PrintForwardList(second);


  return 0;
}
