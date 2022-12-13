#include"main.h"
/**
*main - Main function of the project
*Return: return 0 all the time
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n==0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
