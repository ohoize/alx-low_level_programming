#include "main.h"

/**
 * _isupper - check if parameter is an uppercase charcter.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;
	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
		isupper = 1;
		break;
	}
	}
	return (isupper);
}
