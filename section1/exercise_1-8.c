/*Exercise 1-8.
 * Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

int main()
{
	int c, nl, tabs, blanks;
	nl = 0;
	tabs = 0;
	blanks = 0;

	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			nl++;
		}
		if(c == '\t')
		{
			tabs++;
		}
		if(c == ' ')
		{
			blanks++;
		}
	}
	printf("Number of lines: %d\nNumber of blanks: %d\nNumber of tabs: %d\n", nl, blanks, tabs);
}
