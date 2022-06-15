#include "shell.h"

/**
 * main - call shell prompt
 *
 * Return: (0)
 */

int main(void)
{
	prompt();
	return (0);
}

/**
 * main - start shell
 *
 * Return: void
 */


int main(void)
{
	int ret_val;

	ret_val = prompt();
	if (ret_val != 0)
		return (ret_val);

	return (0);
}
