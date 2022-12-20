#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () 
{
    string s="";
    string tar="";
    int currIdx=0;
    cout<<"Enter a string:";
    std::getline (std::cin,s);
    istringstream iss(s);
    
    while(1)
    {
      if(iss.eof())
      {
       cout<<"finish reading the string"<<endl;   
       break;
      }
      currIdx+=1;
      iss>>tar;
      cout<<currIdx<<"th:"<<tar<<endl;
    }
    return 0;
}
