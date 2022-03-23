#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest, @src - type char
 * @n - int type
 * Return: Always 0.
 */
char *_strncpy (char *dest, char *src, int n)
{
  while (*dest++ = *src++)
    ;
}
int main (void)
{
  char a[5] = "Hello";
  char b[5];
  _strncpy(b, a);
  return (b);
}
