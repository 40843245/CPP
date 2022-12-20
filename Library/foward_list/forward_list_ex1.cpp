// forward_list constructors
#include <iostream>
#include <forward_list>
using namespace std;

void PrintForwardList(forward_list<int> fl)
{
    for (int& x: fl)  
    {
        cout << " " << x; 
    }
    cout <<endl;
}
int main ()
{
  // constructors used in the same order as described above:

  std::forward_list<int> first;                      // default: empty
  std::forward_list<int> second (3,77);              // fill: 3 seventy-sevens
  std::forward_list<int> third (second.begin(), second.end()); // range initialization
  std::forward_list<int> fourth (third);            // copy constructor
  std::forward_list<int> fifth (std::move(fourth));  // move ctor. (fourth wasted)
  std::forward_list<int> sixth = {3, 52, 25, 90};    // initializer_list constructor

  std::cout << "first:" ; PrintForwardList(first);
  std::cout << "second:"; PrintForwardList(second);
  std::cout << "third:";  PrintForwardList(third);
  std::cout << "fourth:"; PrintForwardList(fourth);
  std::cout << "fifth:";  PrintForwardList(fifth);
  std::cout << "sixth:";  PrintForwardList(sixth);

  return 0;
}
