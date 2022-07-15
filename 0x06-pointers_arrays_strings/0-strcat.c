#include "main.h"
/**
* _strcat -> function that concatenates two strings.
* @dest: string parameter1
* @src: string parameter2
* Return:a string
*/
char *_strcat(char *dest, char *src)
{
int len = 0, i;
while (dest[len]
len++;
for (i = 0; src[i] != '\0' i++)
{
dest[len] = src[i];
len += 1;
}
des[len] = '\0';
return (dest);
}
