#include"main.h"
/**
*main - Main function of the project
*Return: return 0 all the time
*/
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
