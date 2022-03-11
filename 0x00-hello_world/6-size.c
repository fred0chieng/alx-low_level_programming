#include <stdio.h>
/**
 * main- This is the entry point for our program
 *
 * Return: Will return success if 0
 */
int main (void)
{
	int j;
	long int k;
	long long int l;
	char d;
	float f;
        
	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of float:\n, %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
