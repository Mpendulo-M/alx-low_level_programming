#include "3-calc.h"
/**
 *get_op_func - gets the right function
 *@s: operator sign
 *Return: Pointer to right function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
}
