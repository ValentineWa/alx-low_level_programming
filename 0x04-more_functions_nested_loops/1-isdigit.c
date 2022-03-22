#include "main.h"

/**
* _isdigit - checks for a digit through 0 and 9
* @c: int type number to check
* Return: 0 or 1
*/
int _isdigit(int c)
{
  if (c >= 0 && c <= 9)
    {
      return (1);
    }
  return (0);
}
