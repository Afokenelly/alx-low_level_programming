#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters passed to
 * the function
 * @n: the number of arguments to be passed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list argument;

	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(argument, const unsigned int);
		}
	}
	va_end (argument);
	return (sum);
}


