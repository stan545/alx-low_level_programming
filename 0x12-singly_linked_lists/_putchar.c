#include <unistd.h>

/**
 *_write_char - write a character to the stdout
 *@c: character to be printed out
 *Return: returns the char
 */

int _write_char(char c)
{

	return (write(1, &c, 1));

}
