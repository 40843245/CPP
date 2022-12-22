#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  int * p = new int (10);

  std::shared_ptr<int> a (new int (20));
  std::shared_ptr<int> b (a,p);  // alias constructor

  cout << "comparing a and b..." <<endl;
  cout<< std::boolalpha;
  cout << "value-based: " << ( !(a<b) && !(b<a) ) << endl;
  cout << "owner-based: " << ( !a.owner_before(b) && !b.owner_before(a) ) << endl;
  delete p;
  return 0;
}
/*
output:
comparing a and b...
value-based: false
owner-based: true
*/
