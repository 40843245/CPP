#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () 
{
  cout << "Please, enter a number or a word: ";
  std::cout.flush();    // ensure output is written

  cin >> std::ws;  // eat up any leading white spaces
  
  int c = std::cin.peek();  // peek character
  if ( c == EOF ) 
    return 1;
  if ( std::isdigit(c) )
  {
    int n;
    cin >> n;
    cout << "You entered the number: " << n << '\n';
  }
  else
  {
    string str;
    cin >> str;
    cout << "You entered the word: " << str << '\n';
  }
  return 0;
}
