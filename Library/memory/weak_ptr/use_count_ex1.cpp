#include <iostream>
#include <memory>
using namespace std;

struct C {int* data;};

int main () 
{
  std::shared_ptr<int> sp (new int);

  std::weak_ptr<int> wp1;
  std::weak_ptr<int> wp2 (wp1);
  std::weak_ptr<int> wp3 (sp);

  std::cout << "use_count:\n";
  std::cout << "wp1: " << wp1.use_count() << '\n';
  std::cout << "wp2: " << wp2.use_count() << '\n';
  std::cout << "wp3: " << wp3.use_count() << '\n';
  return 0;
}
/*
output:
use_count:
wp1: 0
wp2: 0
wp3: 1
*/
