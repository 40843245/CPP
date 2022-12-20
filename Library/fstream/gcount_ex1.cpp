#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
  std::ifstream is ("test.txt", std::ifstream::binary);
  if (is) 
  {
    // get length of file:
    is.seekg (0, is.end);
    int length = is.tellg();
    is.seekg (0, is.beg);
    char * buffer = new char [length];
    cout << "Reading " << length << " characters... ";
    // read data as a block:
    is.read (buffer,length);

    if (is)
    {
        cout << "all characters read successfully.";
    }
    else
    {
      cout << "error: only " << is.gcount() << " could be read";
    }
    cout<<endl;
    is.close();

    delete[] buffer;
  }
  else
  {
    cout<<"ERROR!!! There are unknown error while opening file."<<endl;
  }
  return 0;
}
