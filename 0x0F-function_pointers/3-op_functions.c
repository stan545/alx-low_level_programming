#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two integer values
 * @a: first integer value
 * @b: second integer value
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integer values
 * @a: first integer value
 * @b: second integer value
 * Return: the result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integer values
 * @a: first integer value
 * @b: second integer value
 * Return: the result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integer values
 * @a: first integer value
 * @b: second integer value
 * Return: the result
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - get the modulo of two integer values
 * @a: first integer value
 * @b: second integer value
 * Return: the remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
