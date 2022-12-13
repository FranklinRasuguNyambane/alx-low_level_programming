#include"main.h"
/**
*main - Main function of the project
*Return: return 0 all the time
*/
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = (-1 * (n % 10));
_putchar (last_digit + '0');
return (last_digit);
}
else
{
last_digit = (n % 10);
_putchar (last_digit + '0');
return (last_digit);
}
}
