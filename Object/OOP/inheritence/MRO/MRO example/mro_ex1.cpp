#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
   int x;
};

// Derived class
class Pig:public Animal{
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog:public Animal{
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

class DerivedAnimal:public Pig,public Dog
{
  public:

  
};

void Say(DerivedAnimal o)
{
 o.animalSound(); 
 cout<<"---------------"<<endl;
}


int main() 
{
  Pig myPig;
  Dog myDog;
  DerivedAnimal o;
  Animal a;
  
  myPig.animalSound();
  cout<<"---------------"<<endl;
  myDog.animalSound();
  cout<<"---------------"<<endl;
  a=myPig;
  Say(o);
 
  
  
  return 0;
}
