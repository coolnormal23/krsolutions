/* Exercise 2-5
* Write the function any(s1,s2) which returns the first location in the string s1 where any character
* from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function
* strpbrk does the same job but returns a pointer to the location.) */
#include <stdio.h>
#define SIZE 1000

int any(char s1[], char s2[]);

int main()
{
	printf("enter a string: ");

	char string1[SIZE];
	char string2[SIZE];

	int c, i;
	i = 0;

	while((c = getchar()) != EOF && c != '\n')
	{
		string1[i] = c;
		i++;
	}

	string1[i] = '\0';
	i = 0;

	printf("enter characters to find the first instance of in the string: ");

	while((c = getchar()) != EOF && c != '\n')
	{
		string2[i] = c;
		i++;
	}

	string2[i] = '\0';

	printf("first index: %d\n", any(string1, string2));
}

int any(char s1[], char s2[])
{
	int i, lim;
	i = lim = 0;
	char newstr[SIZE];

	while(s2[lim] != '\0')
	{
		lim++;
	}

	while(s1[i] != '\0')
	{
		for(int j = 0; j < lim; j++)
		{
			if(s1[i] == s2[j])
			{
				return i;
			}
		}
		i++;
	}

	return -1;
}
