#include <iostream>
using namespace std;

class A {};

class B 
{
public:
  explicit B (const A& x) {} //define an explict constructor instead implicit constructor
  B& operator= (const A& x) {return *this;}
  operator A() {return A();}
};

void fn (B x) {}

int main ()
{
  A foo;
  B bar (foo);
  bar = foo;
  foo = bar;
  
  //fn (foo);  // not allowed for explicit ctor. //Compiler Error: candidate function not viable: no known conversion from 'A' to 'B' for 1st argument
  fn (bar);  

  return 0;
}
