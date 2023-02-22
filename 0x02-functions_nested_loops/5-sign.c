nclude "main.h"

/**
 *print_sing -> print sing of based on the condition
 *@n: argument passed
 *Return: 1, 0 and -1 depanding on the condition
 */

int print_sing(int c)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_puchar('-');
		return (-1);
	}
}

