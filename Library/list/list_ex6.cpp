#include <iostream>
#include <list>
using namespace std;


bool single_digit (const int& value) { return (value<10); }

struct is_odd 
{
  bool operator() (const int& value) { return (value%2)==1; }
};

void PrintList(list<int> li)
{
  std::list<int>::iterator it;
  for(it=li.begin();it!=li.end();it++)
  {
      cout<<" "<<(*it);
  }
  cout<<endl;
}

int main ()
{
  int myints[]= {15,36,7,17,20,39,4,1};
  std::list<int> mylist (myints,myints+8);   // 15 36 7 17 20 39 4 1

  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"--------"<<endl;
  
  mylist.remove_if(single_digit);           // 15 36 17 20 39
  
  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"--------"<<endl;
  
  mylist.remove_if(is_odd());               // 36 20

  std::cout << "mylist contains:";
  PrintList(mylist);
  cout<<"--------"<<endl;

  return 0;
}

