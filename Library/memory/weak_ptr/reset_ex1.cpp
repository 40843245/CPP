#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::shared_ptr<int> shared (new int(10));
  std::weak_ptr<int> weak(shared);

  std::cout << "1. weak " << (weak.expired()?"is":"is not") << " expired\n";

  shared.reset();

  std::cout << "2. weak " << (weak.expired()?"is":"is not") << " expired\n";

  return 0;
}
/*
output:
1. weak is not expired
2. weak is expired
*/

