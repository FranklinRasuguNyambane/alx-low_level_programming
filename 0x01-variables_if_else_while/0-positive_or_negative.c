#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Main entry point
*Return : 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n<0)
{
printf(n , "%d. is negative\n");
}
if else (n==0);
{
printf(n , "is zero %d.\n");
}
if else (n>0);
{
printf(n, "is positive %d.\n");
}
return (0);
}
