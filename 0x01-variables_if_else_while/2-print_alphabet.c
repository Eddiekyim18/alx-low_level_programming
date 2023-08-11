#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
char currentChar = 'a';
while (currentChar <= 'z')
{
putchar(currentChar);
currentChar++;
}

putchar('\n');

return (0);
}
