#include <iostream>
#include <stack>
using namespace std;

template <class T1>
void PrintStack(stack<T1> st)
{
  while (!st.empty())
  {
     cout <<" "<<st.top();
     st.pop();
  }   
  cout<<endl;
}

int main ()
{
  std::stack<int> foo,bar;
  
  foo.push (10); 
  foo.push(20); 
  foo.push(30);
  
  bar.push (111); 
  bar.push(222);

  cout<<"Before swap,"<<endl; 
  cout<<"foo contains:"<<endl;
  PrintStack(foo);
  cout<<"bar contains:"<<endl;
  PrintStack(bar);
  cout<<"---------"<<endl;

  foo.swap(bar);

  cout<<"Before swap,"<<endl; 
  cout<<"foo contains:"<<endl;
  PrintStack(foo);
  cout<<"bar contains:"<<endl;
  PrintStack(bar);
  cout<<"---------"<<endl;
  return 0;
}
