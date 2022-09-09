Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@hezekiakiarie 
yuki528
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x01-variables_if_else_while/7-print_tebahpla.c
@yuki528
yuki528 Hard work pays
Latest commit 4cf146d 2 hours ago
 History
 1 contributor
25 lines (23 sloc)  369 Bytes

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter list for main.
 *
 * Description: Prints the alphabet in reverse order
 * Can only use putchar
 *
 * Return: 0 for success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
