#include "main.h"

/**
 * _is lower - check if char is lowercase
 * @c: is the char to be checked 
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c>= 'a' && c <= '2')
		return (1);
	else
		return (0);
}
