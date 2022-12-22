#include <iostream>
#include <memory>
#include <string>
using namespace std;

int cnt=0;

class state_deleter // a deleter class with state
{  
  int count_;
  int no_;
public:
  state_deleter() : count_(0) 
  {
      no_=cnt;
      cout<<"The no "<<no_<<" is used in constructor."<<endl;
      cnt++;
  }
  template <class T>
  void operator()(T* p) 
  {
    cout<<no_<<" is used."<<endl;
    cout << "[deleted #" << ++count_ << "]"<<endl;
    
    delete p;
  }
};

int main () 
{
  state_deleter del;

  std::unique_ptr<int> p;   // uses default deleter

  // alpha and beta use independent copies of the deleter:
  std::unique_ptr<int,state_deleter> alpha (new int);
  std::unique_ptr<int,state_deleter> beta (new int,alpha.get_deleter());

  // gamma and delta share the deleter "del" (deleter type is a reference!):
  std::unique_ptr<int,state_deleter&> gamma (new int,del);
  std::unique_ptr<int,state_deleter&> delta (new int,gamma.get_deleter());

  std::cout << "resetting alpha..."; alpha.reset(new int);
  std::cout << "resetting beta..."; beta.reset(new int);
  std::cout << "resetting gamma..."; gamma.reset(new int);
  std::cout << "resetting delta..."; delta.reset(new int);

  std::cout << "calling gamma/delta deleter...";
  gamma.get_deleter()(new int);

  alpha.get_deleter() = state_deleter();  // a brand new deleter for alpha

  // additional deletions when unique_ptr objects reach out of scope
  // (in inverse order of declaration)

  return 0;
}
/*
output:
The no 0 is used in constructor.
The no 1 is used in constructor.
resetting alpha...1 is used.
[deleted #1]
resetting beta...1 is used.
[deleted #1]
resetting gamma...0 is used.
[deleted #1]
resetting delta...0 is used.
[deleted #2]
calling gamma/delta deleter...0 is used.
[deleted #3]
The no 2 is used in constructor.
0 is used.
[deleted #4]
0 is used.
[deleted #5]
1 is used.
[deleted #2]
2 is used.
[deleted #1]
*/

