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
printf("Size of a int: %zu bytes\n", sizeof(intType));
printf("Size of an int: %zu bytes\n", sizeof(floatType));
printf("Size of a long int: %zu bytes\n", sizeof(doubleType));
printf("Size of a long long int: %zu bytes\n", sizeof(charType));
return (0);
}
