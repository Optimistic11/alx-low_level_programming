#include "main.h"
/**
* _strspn - search a string for a set of bytes
* @s: source string
* @accept: accepted string
*
* Return: number of bytes in the init segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *t = accept;
while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
c++;
break;
}
if (!(*--accept))
break;
accept = t;
}
return (c);
}
