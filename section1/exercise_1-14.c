/*Exercise 1-14
 * Write a program to display a histogram of the frequencies of different characters in its input.*/


#define SIZE 95

#include <stdio.h>
int main()
{
	int characters[SIZE], c;

	for(int i = 0; i < SIZE; i++)
	{
		characters[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		for(int i = 0; i < SIZE; i++)
		{
			if(c == (i+32))
			{
				characters[i]++;	
			}
		}
	}

	printf("\n");

	for(int i = 0; i < SIZE; i++)
	{
		if(characters[i] != 0)
		{
			printf("Number of character '%c': ", i+32);

			for(int j = 0; j < characters[i]; j++)
			{
				printf("#");
			}

			printf("\n");
		}
	}
}
