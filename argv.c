#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Com - Function that handles commands
 * @lines - Handles lines with arguments
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int index = 0;
	char *msg = "Alx is tough";

	printf("message: %s\n", msg);

	printf("Number of arguments with ac: %d\n", ac);
	while (av[index])
	{
		printf("av[%d}, %s\n", index, av[index]);
		++index;
	}

	return (0);
}
