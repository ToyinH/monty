#include "monty.h"
/**
 * main: main function
 * @argc: argument count
 * @argv: arg vector
 * @n: global variable for node element
 * Return: return 0 at suceess
 */

int n;

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		monty_func(argv[1]);
	}
	return (0);
}
