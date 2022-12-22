#include <iostream>
#include <memory>
using namespace std;

int main () 
{

  std::shared_ptr<int> foo = std::make_shared<int> (10);
  // same as:
  std::shared_ptr<int> foo2 (new int(10));

  auto bar = std::make_shared<int> (20);

  auto baz = std::make_shared<std::pair<int,int>> (30,40);

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
