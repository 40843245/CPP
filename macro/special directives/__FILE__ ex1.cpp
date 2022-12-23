#include <iostream>
using namespace std;

int main()
{
  cout << "This is the line number " << __LINE__;
  cout << " of file " << __FILE__ << ".\n";
  cout << "Its compilation began " << __DATE__;
  cout << " at " << __TIME__ << ".\n";
  cout << "The compiler gives a __cplusplus value of " << __cplusplus;
  return 0;
}

/*
possible output:
This is the line number 6 of file main.cpp.
Its compilation began Dec 23 2022 at 11:21:20.
The compiler gives a __cplusplus value of 201402 
*/
