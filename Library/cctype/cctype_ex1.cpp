#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      char c=s[i];
      if(isxdigit(c))
      {
        cout<<c<<" belongs to a hexdecimal digit and is NOT zero."<<endl;   
      }else
      {
        cout<<c<<" does NOT belong to either a hexdemical digit or is NOT zero or both."<<endl;   
      }
      
      if(isgraph(c))
      {
       cout<<c<<" is a graphable char."<<endl;   
      }else
      {
       cout<<c<<" is NOT a graphable char."<<endl;   
      }
      
      if(isprint(c))
      {
       cout<<c<<" is a printable char."<<endl;
      }else
      {
        cout<<c<<" is NOT a printable char."<<endl;
      }
      
      if(isalnum(c))
      {
          cout<<c<<" is a alpha or numeric digit."<<endl; 
      }else
      {
          cout<<c<<" is NEITHER a alpha NOR numeric digit."<<endl; 
      }
      
      if(isupper(c))
      {
          cout<<c<<" is a uppercase char."<<endl;
      }else
      {
          cout<<c<<" is NOT a uppercase char, or it is NOT a alphabet char."<<endl;
      }
      
      if(isspace(c))
      {
        cout<<c<<" is a space."<<endl;   
      }else
      {
         cout<<c<<" is NOT a space."<<endl;
      }
  }
  return 0;
}
