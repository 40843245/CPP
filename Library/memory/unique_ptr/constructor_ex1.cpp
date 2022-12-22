#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  std::default_delete<int> d;
  std::unique_ptr<int> u1;
  std::unique_ptr<int> u2 (nullptr);
  std::unique_ptr<int> u3 (new int);
  std::unique_ptr<int> u4 (new int, d);
  std::unique_ptr<int> u5 (new int, std::default_delete<int>());
  std::unique_ptr<int> u6 (std::move(u5));
  std::unique_ptr<int> u7 (std::move(u6));
  std::unique_ptr<int> u8 (std::auto_ptr<int>(new int));

  cout << "u1: " << (u1?"not null":"null") << endl;
  cout << "u2: " << (u2?"not null":"null") << endl;
  cout << "u3: " << (u3?"not null":"null") << endl;
  cout << "u4: " << (u4?"not null":"null") << endl;
  cout << "u5: " << (u5?"not null":"null") << endl;
  cout << "u6: " << (u6?"not null":"null") << endl;
  cout << "u7: " << (u7?"not null":"null") << endl;
  cout << "u8: " << (u8?"not null":"null") << endl;
  return 0;
}
