#include"main.h"
/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to pointer
 *@to: pointer
 *
 *Return: void
 */
 void set_string(char **s, char *to)
{
	char x;

	s = &to;
	x = **s;
}
