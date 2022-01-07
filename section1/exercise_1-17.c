/* Exercise 1-17
 * Write a program to print all input lines over 80 characters. */

#include <stdio.h>

int main()
{
	int i = 0;
	int c;
	char string[1000];

	while((c = getchar()) != EOF)
	{
		if(c != '\n')
		{
			string[i] = c;
			i++;
		}
		if(c == '\n')
		{
			string[i] = '\0';
			if(i > 80)
			{
				printf("%s\n", string);
			}
			string[0] = '\0';
			i = 0;
		}
	}
}
