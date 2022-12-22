#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::shared_ptr<int> sp1,sp2;
  std::weak_ptr<int> wp;
                                       // sharing group:
                                       // --------------
  sp1 = std::make_shared<int> (20);    // sp1
  wp = sp1;                            // sp1, wp

  sp2 = wp.lock();                     // sp1, wp, sp2
  sp1.reset();                         //      wp, sp2

  sp1 = wp.lock();                     // sp1, wp, sp2

  std::cout << "*sp1: " << *sp1 << '\n';
  std::cout << "*sp2: " << *sp2 << '\n';

  return 0;
}
/*
output:
*sp1: 20
*sp2: 20
*/
