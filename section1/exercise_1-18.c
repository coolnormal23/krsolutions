/*Exercise 1-18
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.*/

#include <stdio.h>
int main()
{
	int c, i, lc;
	i = 0;
	lc = -1;
	char string[1000];

	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c != '\n')
		{
			lc = i;
		}
		if(c != '\n')
		{
			string[i] = c;
			i++;
		}
		if(c == '\n')
		{
			string[lc+1] = '\0';
			if(string[0] != '\0')
			{
				printf("%s\n", string);
			}
			i = 0;
		}
	}
}
