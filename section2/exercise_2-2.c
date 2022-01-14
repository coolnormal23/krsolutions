/* Exercise 2-2
 * Write a for loop equivalent to
 * for(int i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; i++)
 * without using && or ||. */

#include <stdio.h>

int main()
{
	int c, lim;
	lim = 40;

	for(int i = 0; i < lim-1; i++)
	{
		if((c = getchar()) != '\n')
		{
			if(c != EOF)
			{
				putchar(c);
			}
			else
			{
				i = lim;
			}
		}
		else
		{
			i = lim;
		}
	}

	putchar('\n');
}
