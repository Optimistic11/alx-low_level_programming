#include "main.h"
/**
* swap_int -> swap the values two integers are holding
* @a: parameter1
* @b: parameter2
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;

}
