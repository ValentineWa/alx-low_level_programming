#include "main.h"
/**
* print_most_numbers - prints numbers from 0 to 9
* Only use _putchar twice
* Do not print 2 and 4
*/
void print_most_numbers(void)
{
  int i;
  for (i = 0; i <= 9; i++)
    {
      if (i != 2 && i != 4)
	{
	  _putchar ('0' + 1);
	}
      _putchar ('\n');
    }
