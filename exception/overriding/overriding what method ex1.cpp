#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
  //override the what method in the class exception
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;

int main () {
  try
  {
    throw myex;
  }
  catch (exception& e)
  {
    cout << e.what() << endl;
  }
  return 0;
}
