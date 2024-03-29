#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs calculator functions on cmd.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: result of calc function execution
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2; /*number inputs*/
	char *op; /*operator*/

	if (argc != 4) /*wrong argument count*/
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd input*/
	num1 = atoi(argv[1]); /*ist input number*/
	op = argv[2]; /* operator input*/
	num2 = atoi(argv[3]); /*2nd number input*/

	/* statement to check operator in op list*/
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/*modulous by 0 perfromance error*/
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/*prints operation result*/
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

