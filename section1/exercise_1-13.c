/*Exercise 1-13
 * Write a program to display the histogram of word lengths in its input. It is easy to draw a horizontal histogram, vertical is more challenging.*/

#include <stdio.h>
int main()
{
	int lengths[10], c;
	int l = 0;


	for(int i = 0; i < 10; i++)
	{
		lengths[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c ==  '\t' || c == '\n')
		{
			if(l != 0)
			{
				l--;
				lengths[l]++;
			}
			if(l > 10)
			{
				lengths[9]++;
			}
			l = 0;
		}
		else
		{
			l++;
		}
	}

	printf("\n");

	for(int i = 0; i < 10; i++)
	{
		if(i == 9)
		{
			printf("Length of 10+: %d ", lengths[i]);
		}
		else
		{
			printf("Length of %d: %d ", i+1, lengths[i]);
		}

		for(int j = 0; j < lengths[i]; j++)
		{
			printf("#");
		}

		printf("\n");
	}
}
