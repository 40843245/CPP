#include <iostream>
using namespace std;

class CVector 
{
  public:
    int x,y;
    CVector () {}
    CVector (int a, int b) : x(a), y(b) {}
    CVector operator+ (const CVector& rhs) 
    {
        CVector lhs=(*this);
        CVector temp;
        temp.x = lhs.x + rhs.x;
        temp.y = lhs.y + rhs.y;
        return temp;
    }
};

int main () 
{
  CVector foo (3,1);
  CVector bar (1,2);
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << endl;
  result=foo.operator+(bar);
  cout << result.x << ',' << result.y << endl;
  return 0;
}
/*
output:
4,3
4,3
*/
