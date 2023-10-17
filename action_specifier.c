#include "main.h"
/**
 *action_c - adds a caracter into the buffer
 *@args:a lis of arguments going to extract a char
 *@buffer:a char pointer
 *Return:a pointer to char , the result after we add the char
 *
 *
 *
 */
char	*action_c(va_list args, char *buffer)
{
	char c;

	c = va_arg(args, int);
	if (buffer != NULL)
	{
		return (_addchar(buffer, c));
	}
	return (NULL);
}
/**
 * action_s - adds a string to the buffer
 *@args: a list of arguments, we will extract a string from
 *@buffer:a pointer to char
 *Return:a pointer to char
 */
char	*action_s(va_list args, char *buffer)
{
	char *str;

	str = va_arg(args, char *);
	if ((buffer == NULL) || (str == NULL))
	{
		return (NULL);
	}
	return (_addstring(buffer, str));
}
