#include <iostream>
#include <memory>
using namespace std;

struct C {int* data;};

int main () 
{
  std::shared_ptr<int> p1;
  std::shared_ptr<int> p2 (nullptr);
  std::shared_ptr<int> p3 (new int);
  std::shared_ptr<int> p4 (new int, std::default_delete<int>());
  std::shared_ptr<int> p5 (new int, [](int* p){delete p;}, std::allocator<int>());
  std::shared_ptr<int> p6 (p5);
  std::shared_ptr<int> p7 (std::move(p6));
  std::shared_ptr<int> p8 (std::unique_ptr<int>(new int));
  std::shared_ptr<C> obj (new C);
  std::shared_ptr<int> p9 (obj, obj->data);

  cout << "use_count:"<<endl;
  cout << "p1: " << p1.use_count() << endl;
  cout << "p2: " << p2.use_count() << endl;
  cout << "p3: " << p3.use_count() << endl;
  cout << "p4: " << p4.use_count() << endl;
  cout << "p5: " << p5.use_count() << endl;
  cout << "p6: " << p6.use_count() << endl;
  cout << "p7: " << p7.use_count() << endl;
  cout << "p8: " << p8.use_count() << endl;
  cout << "p9: " << p9.use_count() << endl;
  return 0;
}
/*
output:
use_count:
p1: 0
p2: 0
p3: 1
p4: 1
p5: 2
p6: 0
p7: 2
p8: 1
p9: 2
*/
