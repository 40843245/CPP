#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  long double price;
  cout << "Please, enter the price: ";
  cin >> std::get_money(price);
  if (cin.fail()) 
  {
      cout << "Error reading price"<<endl;
  }
  else 
  {
      cout << "The price entered is: " << price << endl;
  }
  return 0;
}
