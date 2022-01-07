/*Exercise 1-20
 * Write a program detab to replace tabs in the input with a proper number of blanks to space to the next tab stop. Assume a fixed set
 * of tab stops, say every n columns. Should n be a variable or a symbolic parameter? */

#define TABSTOP 8 /* every tab stop will be 8 columns long. */
#include <stdio.h>

int main()
{
	int c, n;
	n = 0;
	while((c = getchar()) != EOF)
	{
		if(c != '\t' || c != '\n')
		{
			if(n < (TABSTOP - 1))
			{
				n++;
				putchar(c);
			}
			else
			{
				n = 0;
				putchar(c);
			}
		}
		else if(c == '\n')
		{
			putchar(c);
			n = 0;
		}
		else if(c == '\t')
		{
			for(int j = n; j < TABSTOP; j++)
			{
				putchar(' ');
			}
			n = 0;
		}
	}
}
