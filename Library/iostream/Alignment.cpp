#include <iostream>
using namespace std;

void PrintNumber(int number)
{
  std::cout.width(6); cout << std::internal << number << endl;
  std::cout.width(6); cout << std::left << number << endl;
  std::cout.width(6); cout << std::right << number << endl;  
}
int main () 
{
  int val=0;;
  cout<<"Enter a value:"<<endl;
  cin>>val;
  PrintNumber(val);
  return 0;
}
