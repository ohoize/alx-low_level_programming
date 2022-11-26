#include <stdio.h>

/**
 * bmain - function execute before main
 * Return: no return.
 */

void _attribute_ ((constructor)) bmain()
{
	printf("you're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
