#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Da fuction that handles commands
 * ac - Func that handles number with arguments
 * av - Da array of strings
 * A function prints the number of arguments and function that handles command
 * also with each arguments string
 *
 * Return: Always 0
 */

int main(void)
{
	int index = 0;
	char *msg = "Alx is tough";

	printf("message: %s\n", msg);
	printf("Number of arguments: %d\n", ac);

	while (av[index])
	{
		printf("av[%d], %s\n", index, av[index]);
		++index;
	}

	return (0);
}
