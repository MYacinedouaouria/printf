#include "main.h"
/**
 *_printf - prints a format string with arguments passed
 *@format:a const char pointer
 *Return:the length
 *
 */
int	_printf(const char *format, ...)
{
	char *buffer;
	char* (*action)(va_list, char *);
	int i = 0, length;
	va_list args;

	buffer = initialisation(format);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer = _addchar(buffer, format[i]);
			i++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				buffer = _addchar(buffer, '%');
				i++;
			}
			else
			{
				action = get_action_specifier(format[i]);
				if (action == NULL)
				{
					buffer = _addchar(buffer, '%');
					i++;
				}
				buffer = action(args, buffer);
				i++;
			}
		}
	}
	_putstring(buffer);
	length = _strlen(buffer);
	free_vars(buffer, args);
	return (length);
}
