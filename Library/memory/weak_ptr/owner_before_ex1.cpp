#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  int * p = new int (10);

  std::shared_ptr<int> a (new int (20));
  std::shared_ptr<int> b (a,p);  // alias constructor

  std::weak_ptr<int> c (b);

  std::cout << "comparing a and c...\n" << std::boolalpha;
  std::cout << "value-based: " << ( !(a<c.lock()) && !(c.lock()<a) ) << '\n';
  std::cout << "owner-based: " << ( !a.owner_before(c) && !c.owner_before(a) ) << '\n';

  delete p;
  return 0;
}
/*
output:
comparing a and c...
value-based: false
owner-based: true

*/
