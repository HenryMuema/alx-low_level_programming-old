#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - prints a statement
 *
 * Return: 0
 */
int main(void)
{
	    char w = _putchar ('_');
	    char q = _putchar ('p');
	    char t = _putchar ('u');
	    char e = _putchar ('t');
	    char y = _putchar ('c');
	    char r = _putchar ('h');
	    char u = _putchar ('a');
	    char d = _putchar ('r');
	    char s = _putchar ('\n');

	return (0);
}