#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;
using std::chrono::system_clock;
int main ()
{
  std::time_t tt = system_clock::to_time_t (system_clock::now());
  struct std::tm * ptm = std::localtime(&tt);
  cout << "Now (local time): " << std::put_time(ptm,"%c") << endl;
  return 0;
}
