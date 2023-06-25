#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A freaking function that handles commands
 * @ac: Function that handles an array
 * @av: An array of strings
 * Return: Always 0
 */
int main(char ac, char *av)
{

	int index = 0;
	char *msg = "Alx is wild";

	printf("message: %s\n", msg);
	printf("Number of arguments: %d\n", ac);

	while (av[index])
	{
		printf("av[%d], %d\n", index, av[index]);
		++index;
	}

	return (0);
}
