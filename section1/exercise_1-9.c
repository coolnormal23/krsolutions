/*Exercise 1-9.
* Write a program to copy it's input to its output, and replace each strin gof one or more blanks by a single blank.*/
#include <stdio.h>

int main()
{
	int c, lc;
	lc = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' && lc == ' ')
		{

		}
		else
		{
			putchar(c);
		}
		lc = c;
	}
}
