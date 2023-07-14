#include <stdio.h>

/**
 * main - print all possible combination
 * Return: 0 (Success)
 */
int main(void)
{
	int 1 = 0, j;

	for (j = i + 1; j <= 9; j++)
	{
		for (; i < j; i++)
		{
			int k;

			for (k = j + 1; j <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == '7' && j == '8' && k == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i = 0;
	}
	putchar('\n');
	return (0);
}
