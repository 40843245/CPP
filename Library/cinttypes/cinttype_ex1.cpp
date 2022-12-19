#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main ()
{
  char buffer[80];
  intmax_t foo,bar;
  printf ("Please, enter a number: ");
  fgets (buffer,80,stdin);
  foo = strtoimax (buffer,NULL,10);
  printf ("Thanks for entering %" PRIdMAX ".\n", foo);
  printf ("Please, enter another number: ");
  scanf ("%" SCNdMAX,&bar);
  printf ("%" PRIdMAX " by %" PRIdMAX " is %" PRIdMAX, foo, bar, foo*bar);
  return 0;
}
