#include <stdio.h>

/**
 *main - program that prints all single digit numbers of base 10 starting from
 *You are not allowed to use any variable of type char
 *You can only use the putchar function
 *Return: 0
 **/

int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
