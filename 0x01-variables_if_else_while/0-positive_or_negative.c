#include <stdio.h>
\**
* main -Is this a negative or positive number
* Return: Always 0 (success) 
*/
int main(void)
{
int myNum = 10;
if (myNum > 0)
printf("The value is a positive number.");
else if (myNum < 0)
printf("The value is a negative number.");
else
printf("The value is 0.");
return (0);
}
