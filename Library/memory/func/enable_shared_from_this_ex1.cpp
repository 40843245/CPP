#include <iostream>
#include <memory>
using namespace std;
struct C : std::enable_shared_from_this<C> { }; // inheritence

int main () 
{
  std::shared_ptr<C> foo, bar;

  foo = std::make_shared<C>();
  bar = foo->shared_from_this();

  if (!foo.owner_before(bar) && !bar.owner_before(foo))
  {
    cout << "foo and bar share ownership"<<endl;
  }
  return 0;
}
/*
output:
foo and bar share ownership
*/
