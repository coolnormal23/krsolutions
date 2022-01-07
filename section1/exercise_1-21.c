/*Exercise 1-21
 * Write a program entab to replace strings of blanks by the minimum number of tabs and blanks to fill the same space.
 * When either a tab or a single blank would suffice to reach a stop, what would be given preference? */

#define TABSTOP 8 /* every tab stop will be 8 columns long. */
#include <stdio.h>

int main()
{
	int c, spaces, n;
	spaces = n = 0;

	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c != '\n')
		{
			for(int i = 0; i < spaces; i++)
			{
				putchar(' ');
			}
			spaces = 0;
			putchar(c);
			n++;
		}
		else if(c == ' ')
		{
			spaces++;
			n++;
			if(n == TABSTOP)
			{
				putchar('\t');
				spaces = 0;
			}
		}
		else if(c == '\t')
		{
			n = 0;
			putchar('\t');
		}
		else if(c == '\n')
		{
			for(int i = 0; i < spaces; i++)
			{
				putchar(' ');
			}
			spaces = 0;
			n = 0;

			putchar('\n');
		}

		if(n == TABSTOP)
		{
			n = 0;
		}
	}
}
