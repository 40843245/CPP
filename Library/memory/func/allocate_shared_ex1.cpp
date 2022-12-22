#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::allocator<int> alloc;    // the default allocator for int
  std::default_delete<int> del; // the default deleter for int

  std::shared_ptr<int> foo = std::allocate_shared<int> (alloc,10);

  auto bar = std::allocate_shared<int> (alloc,20);

  auto baz = std::allocate_shared<std::pair<int,int>> (alloc,30,40);

  cout << "*foo: " << (*foo) << endl;
  cout << "*bar: " << (*bar) << endl;
  cout << "*baz: " << baz->first << ' ' << baz->second << endl;
  return 0;
}
/*
output:
*foo: 10
*bar: 20
*baz: 30 40
*/
