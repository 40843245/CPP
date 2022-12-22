#include <iostream>
#include <memory>
using namespace std;

struct D // a verbose array deleter:
{    
  void operator()(int* p) 
  {
    cout << "[deleter called]"<<endl;
    delete[] p;
  }
};

int main () {
  std::shared_ptr<int> foo (new int[10],D());

  int * bar = new int[20];

  // use foo's deleter to delete bar (which is unmanaged):
  (*std::get_deleter<D>(foo))(bar);

  return 0;
  // foo's deleter called automatically
}
/*
output:
[deleter called]
[deleter called]
*/
