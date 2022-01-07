/*Exercise 1-16
 * Revise the main routine of the longest-line program so it will correctly print the length of arbitraily long input lines,
 * and as much as possible of the text.*/

#include <stdio.h>
#define MAXLINE 1000

int getline_book(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len, max;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while((len = getline_book(line, MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0)
	{
		printf("%s", longest);
	}

	return 0;
}

int getline_book(char s[], int lim)
{
	int c, i;

	for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
	{
		if(i < lim-1)
		{
			s[i] = c;
		}
	}

	if(c == '\n')
	{
		s[i] = c;
		i++;
	}

	if(i >= lim)
	{
		s[lim] = '\0';
	}
	else
	{
		s[i] = '\0';
	}

	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;

	while((to[i] = from[i]) != '\0')
	{
		i++;
	}
}
