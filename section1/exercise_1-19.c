/* Exercise 1-19
 * Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input
 * one line at a time. */

#include <stdio.h>

void reverse(char string[]);

int main()
{
	int c, i;
	i = 0;
	char string[1000];

	while((c = getchar()) != EOF)
	{
		string[i] = c;	
		i++;
	}

	string[i] = '\0';

	printf("\nOriginal input:\n%s", string);

	reverse(string);
}

void reverse(char string[])
{
	int i = -1;
	int j = 0;
	char reversed[1000];

	while(string[i+1] != '\0')
	{
		i++;
	}

	while(i >= 0)
	{
		reversed[j] = string[i];
		i--;
		j++;
	}

	reversed[j] = '\0';

	printf("\nNew input:\n%s\n", reversed);
}
