#include <stdio.h>
/**
* main -entry point
* Return: Always 0 (Sucess)
*/
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(doubleType));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
return (0);
}
