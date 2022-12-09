#include <stdio.h>
/**
*main - Main function of the project
*Return: return 0 always
*/
int main(void)
{
char i;
char j;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
