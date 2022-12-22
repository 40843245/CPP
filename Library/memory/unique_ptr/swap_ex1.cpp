#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::unique_ptr<int> foo (new int(10));
  std::unique_ptr<int> bar (new int(20));

  cout<<"Before swap,"<<endl;
  cout << "foo: " << (*foo) << endl;
  cout << "bar: " << (*bar) << endl;
  
  swap(foo,bar);
  
  cout<<"After swap,"<<endl;
  cout << "foo: " << (*foo) << endl;
  cout << "bar: " << (*bar) << endl;
  return 0;
}
/*
output:
Before swap,
foo: 10
bar: 20
After swap,
foo: 20
bar: 10

*/
