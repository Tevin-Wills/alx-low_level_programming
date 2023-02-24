#include <stdio.h>

/**
 * main - Fizzbuzz prints numbers form 1-100:
 *	 Any number that is a multiple of 3 prints Fizz,
 *	 Any number that is a multiple of 5 prints Buzz,
 *	 Numbers that are multiples of both 3 & 5 prints Fizzbuzz.
 *
 * Return: 0 if true
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("Fizzbuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
