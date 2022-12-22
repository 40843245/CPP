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
  //std::unique_ptr<int> u8 (std::auto_ptr<int>(new int));  //deprecated in C++11 or above
  std::unique_ptr<int> u9=std::move(u7);

  cout << "u1: " << (u1?"not null":"null") << endl;
  cout << "u2: " << (u2?"not null":"null") << endl;
  cout << "u3: " << (u3?"not null":"null") << endl;
  cout << "u4: " << (u4?"not null":"null") << endl;
  cout << "u5: " << (u5?"not null":"null") << endl;
  cout << "u6: " << (u6?"not null":"null") << endl;
  cout << "u7: " << (u7?"not null":"null") << endl;
  //cout << "u8: " << (u8?"not null":"null") << endl;
  cout << "u9: " << (u9?"not null":"null") << endl;
  return 0;
}
/*
possible output:
u1: null
u2: null
u3: not null
u4: not null
u5: null
u6: null
u7: not null
u8: not null
u9: not null
*/

/*
Why?
(1)u4:not null
Since d was defined, d is lvalue
Take the following statement for example.
int x=new string("123");
The value of new string("123") is rvalue;
x is lvalue.
See the constructor.
(2)u5:null
See above.
(3)u6:null
Since it is moved from u5 which its stored pointer is null.
NOTE that the stored pointer of u6 is NOT null though u6 is null.
(4)u7:not null
Since it is moved from u6 which its stored pointer is NOT null.
*/
