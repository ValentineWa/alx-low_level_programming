#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void)
{
  char alph = 'a';

  while(alph <= 'z')
    {
      putchar (alph);
      alph++;

    }

  char alph = 'A';

  while (alph <= 'Z')
    {
      putvhar (alph);
      alph++;

    }
  putchar("\n");
  return(0);
}
     
