#include<unistd.h>
/**
*main - main function of the projet
*description:print "and that piece of art is useful" - Dora Korpar, 2015-10-19"
*main
*return: 1
*/
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
