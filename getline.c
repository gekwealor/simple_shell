#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * input_buff - Use da buffer to read many chars
 * call the least possible then read
 * @static - Use da static variables
 *
 * Return: bytes read
 */
ssize_t input_buff(ino_t *info, char **buff, size_t *len)

{
	ssize_t b = 0;
	size_t len_r = 0;
	char *line = NULL;
	int lengthline = 0;

	if
		(b = getline(buff, &len_r, stdin));

	else
		b = getline(info, buff, &len_r);

	if (b > 0)
	{
		if ((*buff)[b - 1] == '\n')
		{
			(*buff)[b - 1] = '\0';
			b--;
		}
		info->linelenght = 1;
		remove_comments(*buff);
		build_latest_list(info, *buf, info->latestcount++);
		/* if (_strchr(*buff, ';')) Does this embody a command chain? */
		{
			*len = b;
			info->cmd_buff = buff;
		}
	}

	return (b);
}

/**
 * get_input - Subtract newline from old
 * @info: Da parameter struct
 *
 * Return: Freaking byte to be read
 */

ssize_t get_input(ino_t *info)

{
	static char *buff,
	static size_t len, x, y;
	size_t b = 0;
	char **buff_r = &(info->arg), *r;

	_putchar(BUFF_FLUSH);
	b = input_buff(&buff, info, &len);

	if (b == -1)
		return (-1);
	if (len)
		y = x;
	r = buff + i;

	check_chain(buff, info, &y, x, len);
	while (y < len)
	{
		if (is_chain(info, buff, &y))
			break;
		y++;
	}

	x = y + 1;
	if (x >= len)
	{
		x = len = 0;
		info->cmd_buff_type = CMD_NORM;

	}

	*buff_r = r;
	return (_strlen(r));
	{
	*buff_r = buff;

	return (r);
	}
}

/**
 * getline - STDIN gives the next line of input
 * @length - Da size of replicated pointer is not NULL.
 * @info - Gives the parameter
 * @pntr - pointer is addressed, given NULL or replicated
 * Return: d
 */
int getline(ino_t *info, size_t *length, char **pntr)

{
	static char buff[READ_BUFF_SIZE];
	static size_t i, len;
	size_t p;
	size_t d = 0, d = 0;
	char *r = NULL, *new_r = NULL, *e;

	r = *pntr;
	if (r && length)
		d = *length;
	if (i == len)
		i = len = 0;

	d = read_buff(buff, info, &len)
	if (d == -1 || (d == 0 && len == 0))
		return (-1);

}

