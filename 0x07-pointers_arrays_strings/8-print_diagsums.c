#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints sums
* @a: the matrix
* @size: the size
*/
void print_diagsums(int *a, int size)
{
int b, sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
{
sum1 += *(a + (size * i + i));
sum2 += *(a + (size * i + size - 1 - i));
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
