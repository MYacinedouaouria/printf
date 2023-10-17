#include "main.h"
/**
 *check_buffer - checks if a buffer is NULL
 *@buffer:a pointer to char
 *
 *
 */
void	check_buffer(char *buffer)
{
	if (buffer == NULL)
	{
		_putstring("error buffer");
		exit(0);
	}
}
/**
 *initialisation - initialize the buffer
 *@format:the format string
 *Return:a pointer to buffer created
 *
 */
char	*initialisation(const char *format)
{
	char *p;

	if (format == NULL)
	{
		_putstring("error format is NULL");
		exit(0);
	}
	p = malloc(sizeof(char));
	check_buffer(p);
	p[0] = '\0';
	return (p);
}
/**
 *free_vars - free variables
 *@buffer:apointer to char
 *@args:va_list argument
 *
 */
void	free_vars(char *buffer, va_list args)
{
	free(buffer);
	va_end(args);
}
