#include <stdio.h>
/**
*main - Main function of the project
*Return: return 0 always
*/
int main(void)
{
char c;
char d = '0';
while (d <='9')
{
putchar(d);
d++;
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
