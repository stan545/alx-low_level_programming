#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* This is all the main protypes*/
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

/**
  * _putchar - writes a char c to stdout
  * @c: character t be printed
  * Return: 1 on success, otherwise -1 (error)
  */
int _putchar(int c);
#endif
