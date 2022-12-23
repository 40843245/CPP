#define glue(a,b) a ## b

int main()
{
  glue(c,out) << "test"; //equivalent to cout<<"test";
  return 0; 
}
/*
output:
test
*/
