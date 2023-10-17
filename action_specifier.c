#include "main.h"
/*
 *
 *
 *
 *
 *
 *
 *
 */
char action_c(va_list args, charbuffer)
{
	char c;

	c = va_arg(args, int);
	if (buffer != NULL)
	{
		return (_addchar(buffer, c));
	}
	return (NULL);
}
/*
 *
 *
 *
 *
 */
char action_s(va_list args, charbuffer)
{
	char str;

	str = va_arg(args, char);
	if ((buffer == NULL) || (str == NULL))
	{
		return (NULL);
	}
	return (_addstring(buffer, str));
}

