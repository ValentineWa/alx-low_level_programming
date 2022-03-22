#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: int type number to check
* Return: 0 or 1
*/
void print_diagonal(int n)
{
  {
	int filas;
	int columnas;

	if (n > 0)
	{
		for (filas = 0; filas < n; filas++)
		{
			for (columnas = 0; columnas <= filas; columnas++)
			{
				if (filas == columnas)
				{
					_putchar ('\\');
					_putchar ('\n');
				}
				else
				{
					_putchar (' ');
				}
			}
		}
	}
	else
	{
		_putchar ('\n');
	}
}
