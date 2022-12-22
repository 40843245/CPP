#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main () 
{
  // get block of uninitialized memory:
  std::pair <std::string*,std::ptrdiff_t>
    result = std::get_temporary_buffer<std::string>(3);

  if (result.second>0) 
  {
    std::uninitialized_fill ( result.first, result.first+result.second, "c++ rocks!" );

    for (int i=0; i<result.second; i++)
      std::cout << result.first[i] << '\n';

    std::return_temporary_buffer(result.first);
  }
  return 0;
}
/*
output:
c++ rocks!
c++ rocks!
c++ rocks!
*/
