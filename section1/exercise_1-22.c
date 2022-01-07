/* Exercise 1-22.
 * Make a program to "fold" long input lines into 2 or more shorter lines after the last non-blank character
 * that occurs before the nth column of input. Make sure your program does something inteligent with very
 * long lines, and if there are no blanks or spaces before the specified column. */

#include <stdio.h>
#define STOP 20
// ^ the nth line

int main()
{
	int n, c, spaces;
	n = 0;
	spaces = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			n++;
			spaces++;

			if(n == STOP)
			{
				for(int i = 0; i < spaces; i++)
				{
					putchar(' ');
				}
				spaces = 0;
				putchar('\n');
				n = 0;
			}
		}
		else if(c == '\t')
		{
			while((n%8) != 0)
			{
				n++;
			}
			if(n > STOP)
			{
				putchar('\n');
				spaces = 0;
				n = 0;
			}
			else if(n == STOP)
			{
				for(int i = 0; i < spaces; i++)
				{
					putchar(' ');
				}
				putchar(c);
				putchar('\n');
				n = 0;
			}
			else
			{
				putchar(c);
			}
		}
		else if(c == '\n')
		{
			for(int i = 0; i < spaces; i++)
			{
				putchar(' ');
			}
			spaces = 0;
			putchar('\n');
			n = 0;
		}
		else
		{
			n++;
			if(n == STOP)
			{
				for(int i = 0; i < spaces; i++)
				{
					putchar(' ');
				}
				spaces = 0;
				n = 0;
				putchar('\n');
				putchar(c);
			}
			else
			{
				for(int i = 0; i < spaces; i++)
				{
					putchar(' ');
				}
				spaces = 0;
				putchar(c);
			}
		}
	}
}
