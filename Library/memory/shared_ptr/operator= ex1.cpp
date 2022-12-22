#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::shared_ptr<int> foo;
  std::shared_ptr<int> bar (new int(10));

  foo = bar;                          // copy

  bar = std::make_shared<int> (20);   // move


  cout << "*foo: " << (*foo) << endl;
  cout << "*bar: " << (*bar) << endl;
  cout<<"------"<<endl;
  
  std::unique_ptr<int> unique (new int(30));
  foo = std::move(unique);            // move from unique_ptr

  cout << "*foo: " << (*foo) << endl;
  cout << "*bar: " << (*bar) << endl;
  cout<<"------"<<endl;
  return 0;
}

/*
output:
*foo: 10
*bar: 20
------
*foo: 30
*bar: 20
------
*/
