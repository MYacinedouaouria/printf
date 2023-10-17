#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define NULL ((void *)0)
char	get_char_argument(va_list args);
void	check_buffer(char *buffer);
int	_printf(const char *format, ...);
void	_putchar(char c);
void	_putstring(char *s);
char	*_addchar(char *buffer, char c);
char	*_addstring(char *buffer, char *s);
char	*_realoc(char *buffer, int new_size);
int	_strlen(char *str);
char	*_strcat(char *buffer, char *str);
char	*action_c(va_list, char *);
char	*action_s(va_list, char *);
char	*(*get_action_specifier(char s))(va_list args, char *buffer);
char	*initialisation(const char *);
void	free_vars(char *buffer, va_list args);
/**
 *struct sp - struct of specifiers and the function
 *associated for each specifier
 *@specifier:a char specifier
 *@action:a pointer to a function associated to that specifier
 */
typedef struct sp
{
	char specifier;

	char* (*action)(va_list, char *);

} specifier;
#endif

