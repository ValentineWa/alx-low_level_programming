#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1, @s2 - type char
 * Return : 0
 */
int _strcmp (char *s1, char *s2)
{
  int flag = 0;
  while (*a != '\0' && *b != '\0')
    {
      if (*a != *b)
	{
	  flag = 1;
	}
      a++;
      b++;
    }
  if (flag == 0)
    return (0);
  else
    return (1);
}
