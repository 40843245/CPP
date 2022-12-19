#include <cstdio>
#include <setjmp.h>

int main()
{
  jmp_buf env;
  int val;
  val=setjmp(env);
  printf ("val is %d\n",val);
  if (!val) 
  {
      longjmp(env, 1);
  }
  return 0;
}
