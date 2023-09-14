#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - adds numbers
 * @a: first num
 * @b: second num
 *
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - adds numbers
 * @a: first num
 * @b: second num
 *
 * Return: answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - adds numbers
 * @a: first num
 * @b: second num
 *
 * Return: answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - adds numbers
 * @a: first num
 * @b: second num
 *
 * Return: answer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - adds numbers
 * @a: first num
 * @b: second num
 *
 * Return: answer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
