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

template <class T1>
stack<T1> PrintAndClearStack(stack<T1> st)
{
  while (!st.empty())
  {
     cout <<" "<<st.top();
     st.pop();
  }   
  cout<<endl;
  return st;
}

template <class T1>
stack<T1> ClearStack(stack<T1> st)
{
  while (!st.empty())
  {
     st.pop();
  }  
  cout<<endl;
  return st;
}

template <class T1>
void CheckEmpty(stack<T1> st)
{
  if(st.empty())
  {
    cout<<"The stack is empty."<<endl;   
  }else
  {
    cout<<"The stack is NOT empty."<<endl;   
    PrintStack(st);
  }
}

int main ()
{
  std::stack<int> mystack;
  for (int i=0; i<5; ++i) 
  {
      mystack.push(i);
  }
  
  CheckEmpty(mystack);
  cout<<"---------"<<endl;
  
  mystack=ClearStack(mystack);
  
  CheckEmpty(mystack);
  cout<<"---------"<<endl;
  
  return 0;
}
