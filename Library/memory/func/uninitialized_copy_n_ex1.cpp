#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main () 
{
  std::string numbers[] = {"one","two","three"};

  // get block of uninitialized memory:
  std::pair <std::string*,std::ptrdiff_t> result = std::get_temporary_buffer<std::string>(3);

  if (result.second>0) 
  {
    std::uninitialized_copy_n ( numbers, result.second, result.first );

    for (int i=0; i<result.second; i++)
      std::cout << result.first[i] << ' ';
    std::cout << '\n';

    std::return_temporary_buffer(result.first);
  }
  return 0;
}
/*
output:
one two three 
*/
