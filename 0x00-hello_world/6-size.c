#include <stdio.h>

/**
 * main - data type
 *
 * Return: Always 0
 *
 */
int main(void) 
{

char q;
int p;
long int t;
long long int r;
float j;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));



return (0);
}
