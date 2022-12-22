#include <iostream>
#include <memory>
using namespace std;

std::unique_ptr<int> bar; 
std::unique_ptr<int> foo;
int counter=0;

void PrintAllUniquePtr()
{
  cout<<counter<<endl;
  cout<<"foo "<<(foo?"not null":"null")<<"."<<endl;
  cout<<"bar "<<(bar?"not null":"null")<<"."<<endl;
  cout<<"----------"<<endl;
  counter++;
}
int main () 
{
                                           // foo   bar    p
                                           // ---   ---   ---
                                           // null
                                           // null  null
  int* p = nullptr;                        // null  null  null
  
  PrintAllUniquePtr();
  
  foo = std::unique_ptr<int>(new int(10)); // (10)  null  null
  bar = std::move(foo);                    // null  (10)  null
  
  PrintAllUniquePtr();
  
  p = bar.get();                           // null  (10)  (10)
  *p = 20;                                 // null  (20)  (20)
  p = nullptr;                             // null  (20)  null

  foo = std::unique_ptr<int>(new int(30)); // (30)  (20)  null
  
  PrintAllUniquePtr();
  
  p = foo.release();                       // null  (20)  (30)
  
  PrintAllUniquePtr();
  
  *p = 40;                                 // null  (20)  (40)

  delete p;   // the program is now responsible of deleting the object pointed to by p
              // bar deletes its managed object automatically
  return 0;
}
