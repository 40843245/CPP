#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::shared_ptr<int> foo;
  std::shared_ptr<int> bar (new int);

  cout << "foo unique?"<<endl; 
  cout<< std::boolalpha;

  cout << "1: " << foo.unique() << endl;  // false (empty)

  foo = bar;
  cout << "2: " << foo.unique() << endl;  // false (shared with bar)

  bar = nullptr;
  cout << "3: " << foo.unique() << endl;  // true
  return 0;
}
