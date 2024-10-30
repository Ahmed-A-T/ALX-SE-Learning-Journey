#include <stdio.h>

void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				if((i < 0) && (i >= -9))
				{
					putchar('-');
					putchar((-i % 10) + '0');
					putchar(',');
					putchar(' ');
				}
				else if(i < -9)
				{
					putchar('-');
					putchar((-i / 10) + '0');
					putchar((-i % 10) + '0');
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar((i % 10) + '0');
					putchar(',');
					putchar(' ');

				}
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (i != 98){
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	else 
	{
		for (i = n; i >= 98; i--){
			if (i < 100)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (i != 98){
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				putchar((i / 100) + '0');
				putchar(((i / 10) % 10) + '0');
				putchar((i % 10) + '0');
				if (i != 98){
					putchar(',');
					putchar(' ');
				}

			}
		}
	}

	putchar('\n');
}

int main()
{
	print_to_98(-10);

	return (0);
}
