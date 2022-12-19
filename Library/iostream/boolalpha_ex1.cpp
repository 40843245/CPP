#include <iostream>
#include <string>
using namespace std;
int main ()
{
  bool b = true;
  cout << std::boolalpha << b << endl;
  cout << std::noboolalpha << b << endl;
  cout<<"------"<<endl;
  
  b=false;
  cout << std::boolalpha << b << endl;
  cout << std::noboolalpha << b << endl;
  cout<<"------"<<endl;
  
  int val=0;
  cout << std::boolalpha << val << endl;
  cout << std::boolalpha << (bool)val << endl;
  cout << std::noboolalpha << val << endl;
  cout<<"------"<<endl;
  
  val=1;
  cout << std::boolalpha << val << endl;
  cout << std::boolalpha << (bool)val << endl;
  cout << std::noboolalpha << val << endl;
  cout<<"------"<<endl;
 
  char c='\0';
  cout << std::boolalpha << c << endl;
  cout << std::boolalpha << (bool)c << endl;
  cout << std::noboolalpha << c << endl;
  cout<<"------"<<endl;
  
  c='a';
  cout << std::boolalpha << c << endl;
  cout << std::boolalpha << (bool)c << endl;
  cout << std::noboolalpha << c << endl;
  cout<<"------"<<endl;
  
  return 0;
}
