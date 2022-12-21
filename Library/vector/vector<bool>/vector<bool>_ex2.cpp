#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<bool> vecb)
{
  for (unsigned i=0; i<vecb.size(); i++) 
  {
      cout << ' ' << vecb[i];    
  }
  cout<<endl;
}

int main ()
{
  std::vector<bool> foo;
  std::vector<bool> bar;

  foo.push_back(false);
  foo.push_back(true);
  foo.push_back(false);

  bar.push_back(true);
  bar.push_back(false);

  cout << std::boolalpha;

  cout<<"Before swap,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"-----"<<endl;

  foo.swap (foo[0], foo[1]);
  
  cout<<"After swap of foo,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"-----"<<endl;
  
  bar.swap (bar.front(), bar.back());
 
  cout<<"After swap of bar,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"-----"<<endl;

 
  foo.swap(bar);

  cout<<"After swap between foo and bar,"<<endl;
  cout << "foo contains:";
  PrintVector(foo);
  cout << "bar contains:";
  PrintVector(bar);
  cout<<"-----"<<endl;
  return 0;
}
