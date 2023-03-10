#include <iostream>
#include <typeinfo>
using namespace std;

struct Base {};
struct Derived : Base {};
struct Poly_Base {virtual void Member(){}};
struct Poly_Derived: Poly_Base {};

typedef int my_int_type;

int main() 
{
  std::cout << std::boolalpha;

  // fundamental types:
  std::cout << "int vs my_int_type: ";
  std::cout << ( typeid(int) == typeid(my_int_type) ) << '\n';

  // class types:
  std::cout << "Base vs Derived: ";
  std::cout << ( typeid(Base)==typeid(Derived) ) << '\n';

  // non-polymorphic object:
  Base* pbase = new Derived;

  std::cout << "Base vs *pbase: ";
  std::cout << ( typeid(Base)==typeid(*pbase) ) << '\n';

  // polymorphic object:
  Poly_Base* ppolybase = new Poly_Derived;

  std::cout << "Poly_Base vs *ppolybase: ";
  std::cout << ( typeid(Poly_Base)==typeid(*ppolybase) ) << '\n';

  return 0;
}
