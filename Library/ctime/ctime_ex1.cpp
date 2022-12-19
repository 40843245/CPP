#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main ()
{
  struct std::tm when;
  cout << "Please, enter the time: ";
  cin >> std::get_time(&when,"%R");   // extract time (24H format)

  if (cin.fail()) 
  {
      cout << "Error reading time"<<endl;
  }
  else {
    cout << "The time entered is: ";
    cout << when.tm_hour << " hours and " << when.tm_min << " minutes"<<endl;
  }

  return 0;
}
