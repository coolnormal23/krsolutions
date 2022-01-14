/* Exercise 2-4
 * Write an alternate version of squeeze(s1,s2) that deletes each character in s1 that matches any char in the string s2. */

#include <stdio.h>
#define SIZE 1000

void squeeze(char s1[], char s2[]);

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

	printf("enter characters to be removed from string: ");

	while((c = getchar()) != EOF && c != '\n')
	{
		string2[i] = c;
		i++;
	}

	string2[i] = '\0';
	squeeze(string1, string2);
}

void squeeze(char s1[], char s2[])
{
	int i, lim, k;
	i = lim = k = 0;
	char newstr[SIZE];

	while(s2[lim] != '\0')
	{
		lim++;
	}

	while(s1[i] != '\0')
	{
		int flag = 0;
		for(int j = 0; j < lim; j++)
		{
			if(s1[i] == s2[j])
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			newstr[k] = s1[i];
			k++;
		}
		i++;
	}

	printf("new string: %s\n", newstr);
}
