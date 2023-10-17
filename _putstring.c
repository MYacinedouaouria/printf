#include "main.h"
/**
 *_putstring - prints a string
 *@s:apointer to char
 *
 */
void	_putstring(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return;
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
