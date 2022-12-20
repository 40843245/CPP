#include <iostream>
#include <array>
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
  std::array<int,3> myarray = { 11, 22, 33 };
  std::forward_list<int> mylist;
  std::forward_list<int>::iterator it;

  cout << "mylist contains:";
  PrintForwardList(mylist);
  
  it = mylist.insert_after ( mylist.before_begin(), 10 );          // 10
                                                                   //  ^  <- it
  cout << "mylist contains:";
  PrintForwardList(mylist);
                                                                   
  it = mylist.insert_after ( it, 2, 20 );                          // 10 20 20
                                                                   //        ^
  cout << "mylist contains:";
  PrintForwardList(mylist);
  
  it = mylist.insert_after ( it, myarray.begin(), myarray.end() ); // 10 20 20 11 22 33
                                                                   //                 ^
 
  cout << "mylist contains:";
  PrintForwardList(mylist);
  
  it = mylist.begin();                                             //  ^
  it = mylist.insert_after ( it, {1,2,3} );                        // 10 1 2 3 20 20 11 22 33
                                                                   //        ^
  cout << "mylist contains:";
  PrintForwardList(mylist);
  return 0;
}
