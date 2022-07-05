#include "main.h"
/**
* print_alphabet_x10 - print in lower case
*/
void print_alphabet_x10(void)
{
int i;
int k;
for (k = '0'; k <= '10'; k++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar (i);
}
_putchar ('\n');
}
}
