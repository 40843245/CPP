#include <iostream>
using namespace std;

void PrintWithPrecision(int prec)
{
  double a = 3.1415926534;
  double b = 2006.0;
  double c = 1.0e-10;

  cout.precision(prec); // set the precision to 5 digit

  cout << "hexfloat:"<<endl << std::hexfloat;
  cout << a << endl << b << endl << c << endl;
  cout <<"---------"<<endl;
  cout << "defaultfloat:"<<endl << std::defaultfloat;
  cout << a << endl << b << endl << c << endl;  
  cout <<"---------"<<endl;
}

int main () 
{
  cout<<"Precision with 5."<<endl;
  PrintWithPrecision(5);
  cout<<"Precision with 4."<<endl;
  PrintWithPrecision(4);

  return 0;
}
