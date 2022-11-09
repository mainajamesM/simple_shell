#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - readline
 * @ac: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(__attribute__((unused))int ac, __attribute__((unused))char *argv[])
{
	char *line;
	size_t len;
	ssize_t nread;

	line = NULL;
	len = 0;
	printf("$ ");
	nread = getline(&line, &len, stdin);
	printf("%sNumber of chars: %ld\n", line, nread);
	free(line);
	exit(EXIT_SUCCESS);
	return (0);
}
