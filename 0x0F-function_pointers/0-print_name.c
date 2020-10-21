/**
 * print_name - function that prints a name
 * @name: char pointer to name of function
 * @f: pointer to function f that takes a char pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
