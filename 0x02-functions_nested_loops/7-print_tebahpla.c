#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void)
{
  char alph = 'z';

  while (alph <= 'a')
    {
      putchar(alph);
      alph--;

    }
  putchar('\n');
  return (0);

}
