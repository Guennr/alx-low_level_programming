#include <stdio.h>

/**
 * reset_to_98 - a function to update the reference to a pointer
 * @n: pointer to n to be updated
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - the entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 10;

	printf("Before reset_to_98: n = %d\n", n);
	reset_to_98(&n);
	printf("After reset_to_98: n = %d\n", n);
	return (0);
}
