#include "main.h"
#include <stddef.h>
/**
* _strchr -> string character
* @s: string given
* @c: another char
* @c: another char
*/
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
