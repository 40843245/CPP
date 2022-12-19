#include <iostream>
#include <iomanip>
using namespace std;
void PrintNumber(int number)
{
  cout<<"You entered ";
  cout << number <<endl;
  
  cout<<"Its decimal is"<<endl;
  cout << std::dec << std::setiosflags (std::ios::showbase);
  cout << number << endl;
  cout << std::resetiosflags(std::ios::showbase) << number << endl;
  
  cout<<"Its hexdecimal is"<<endl;
  cout << std::hex << std::setiosflags (std::ios::showbase);
  cout << number << endl;
  cout << std::resetiosflags(std::ios::showbase) << number << endl;
  
  cout<<"Its octal is"<<endl;
  cout << std::oct << std::setiosflags (std::ios::showbase);
  cout << number << endl;
  cout << std::resetiosflags(std::ios::showbase) << number << endl;  
}
int main () 
{
  int val;
  cout<<"enter a value:"<<endl;
  cin>>val;
  PrintNumber(val);
  return 0;
}
