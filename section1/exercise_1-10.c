/*Exercise 1-10.
* Write a program to copy its input to its output, replacing each tab with \t, backspace with \b, and backslash with \\. this makes tabs and backspaces viewable in an unambiguous way.*/
#include <stdio.h>

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			printf("\\t");
		}
		else if(c == '\b')
		{
			printf("\\b");
		}
		else if(c == '\\')
		{
			printf("\\\\");
		}
		else
		{
			putchar(c);
		}
	}
}
