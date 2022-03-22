#include "main.h"
/**
* print_line - draws a straight line
* Only use _putchar function to print
* n is the number of times the character _ should be printed
* If n is 0 is less, the function should only print \n
*/
void print_line(int n)
{
  int i;
  for (i = 0; i <= n; i++)
    {
      _putchar ('_' + 1);
    }
  _putchar ('\n');
}

