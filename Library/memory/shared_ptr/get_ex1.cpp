#include <iostream>
#include <memory>
using namespace std;

int main () 
{
  int* p = new int (10);
  std::shared_ptr<int> a (p);

  if (a.get()==p)
  {
    cout << "a and p point to the same location"<<endl;
  }else
  {
      cout << "a and p does NOT point to the same location"<<endl;
  }
  
  /*
  compiler Error
  //error: invalid operands to binary expression ('std::shared_ptr<int>' and 'int *')
  if (a==p)
  {
    cout << "a and p point to the same location"<<endl;
  }else
  {
      cout << "a and p does NOT point to the same location"<<endl;
  }
  */

  // three ways of accessing the same address:
  cout << (*(a.get())) << endl;
  cout << (*a) << endl;
  cout << (*p) << endl;
  return 0;
}
/*
output:
a and p point to the same location
10
10
10
*/
