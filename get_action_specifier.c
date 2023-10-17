#include "main.h"
/**
 *get_action_specifier - searches a specifier and return a function
 *@s:a char
 *Return:a pointer to a function
 */
char (get_action_specifier(char s))(va_list args, char *buffer)
{
	specifier specifiers[] = {
		{'c', action_c},
		{'s', action_s},
		{'\0', NULL}
	};
	int i = 0;

	while (specifiers[i].specifier != '\0')
	{
		if (specifiers[i].specifier == s)
		{
			return (specifiers[i].action);
		}
		i++;
	}
	return (NULL);
}
