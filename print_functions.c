#include "main.h"

/**
 * _putchar - prints character
 * @c: Character
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints string
 * @s: string to be printed
 * Return: Nothing
 */

int print_string(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		count++;
		i++;
	}
	return (count);
}
