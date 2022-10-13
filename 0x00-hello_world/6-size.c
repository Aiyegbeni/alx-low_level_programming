#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	
	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Sizs of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(li));
	printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
	printf("Size of a float: %i byte(s)\n", sizeof(f));

	return (0);
}
