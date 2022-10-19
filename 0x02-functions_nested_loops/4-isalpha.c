#include "main.h"
/**
 * _isalpha-check if character to check if it lower or upper
 * @c:character to check if is lower
 * Return:1-if lower/uppercase.0-if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
