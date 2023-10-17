#include "main.h"
/**
 *_realloc -  realocates a bufer
 *@buffer:the old buffer
 *@new_size:the new size
 *Return:a pointer to the new buffer
 *
 */
char	*_realloc(char *buffer, int new_size)
{
	char *p;
	int i = 0;

	if (new_size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * new_size);
	if (p == NULL)
	{
		free(buffer);
		return (NULL);
	}
	while (buffer[i] != '\0')
	{
		p[i] = buffer[i];
		i++;
	}
	p[i] = '\0';
	free(buffer);
	return (p);
}
/**
 *_strlen - calculate the length of a string
 *@str:the string
 *Return:an int that is the length
 *
 */
int	_strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *_strcat - concatenate two strings
 *@buffer:destination
 *@str:source
 *Return:the buffer that concatenate with str
 */
char	*_strcat(char *buffer, char *str)
{
	int i = 0, j = 0;

	if ((buffer == NULL) || (str == NULL))
	{
		return (NULL);
	}
	while (buffer[i] != '\0')
	{
		i++;
	}
	while (str[j] != '\0')
	{
		buffer[i] = str[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/**
 *_addchar - adds a char into the buffer
 *@buffer:a pointer to char
 *@c:a char
 *Return:a pointer to char
 *
 */
char	*_addchar(char *buffer, char c)
{
	char *p;
	int old_size;

	check_buffer(buffer);
	old_size = _strlen(buffer);
	p = _realloc(buffer, old_size + 2);
	check_buffer(p);
	p[old_size] = c;
	p[old_size + 1] = '\0';
	return (p);
}
/**
 *_addstring - adds a string to the buffer
 *@buffer:a pointer to char
 *@str:a pointer to char
 *Return:a pointer to char
 */
char	*_addstring(char *buffer, char *str)
{
	char *p;
	int new_size;

	check_buffer(buffer);
	new_size = _strlen(buffer) + _strlen(str) + 1;
	p = _realloc(buffer, new_size);
	check_buffer(p);
	p = _strcat(p, str);
	return (p);
}
