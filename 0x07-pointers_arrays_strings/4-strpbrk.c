#include "main.h"
#include <stdio.h>
/**
* _strspn - search a string for a set of bytes
* @s: source string
* @accept: accepted string
* Return: number of bytes in the init segment
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
return (NULL);
}
