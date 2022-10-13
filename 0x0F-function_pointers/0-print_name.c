#include "function_pointers.h"

/**
 * print_name - funtion that calls back the address
 *of another function
 * @name: a string passed as argument to the function
 * @f: a funtion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
