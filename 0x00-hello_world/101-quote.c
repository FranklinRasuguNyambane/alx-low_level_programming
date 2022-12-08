#include<unistd.h>
/**
*main - prints the standard error sandwitched around the output
*description-print "and that piece of art is useful" - Dora Korpar, 2015-10-19"
*return:returns 1
*
*/
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
/**
 *Return : Returns errors(1)
 */
 return (1);
}
