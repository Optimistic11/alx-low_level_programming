#include "main.h"
/**
* print_chessboard - Print the chessboard
* @a: array of pieces
*
* Return: Nothing.
*/
void print_chessboard(char (*a)[8])
{
int b, c;
for (b = 0; i < 8; b++)
{
for (c = 0; c < 8; c++)
{
_putchar(*(*(i + a) + j));
}
_putchar('\n');
}
}
