#include <stdio.h>
/**
 *Main -Entry point
 *Description:Prints the size of various types of data 
 *Return:0
 */
int main(void)
{
int
char
long int
long long int
float

printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float)); 
return (0);
}
