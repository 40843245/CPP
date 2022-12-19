#include <iostream>
//#include <iomanip> // NOT needed
using namespace std;
void PrintNumber(int number)
{
  std::cout.setf ( std::ios::hex, std::ios::basefield );
  std::cout.setf ( std::ios::showbase );                  // activate showbase
  std::cout << number << endl;
  std::cout.unsetf ( std::ios::showbase );                // deactivate showbase
  std::cout << number << endl;  
}
int main () 
{
  int val=0;
  cout<<"Enter a value:"<<endl;
  cin>>val;
  PrintNumber(val);
  return 0;
}
