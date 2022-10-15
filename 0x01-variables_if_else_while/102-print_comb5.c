#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1_d1 = '0';
	int num1_d2 = '0';

	while (num1_d1 <= '9')
	{
		int num2_d1 = num1_d2 + 1 <= '9' ? num1_d1 : num1_d1 + 1;
		int num2_d2 = num1_d2 + 1 <= '9' ? num1_d2 + 1 : '0';

		if (num1_d1 == '9' && num1_d2 == '9')
			break;

		while (num2_d1 <= '9' && num2_d2 <= '9')
		{
			putchar(num1_d1);
			putchar(num1_d2);
			putchar(' ');
			putchar(num2_d1);
			putchar(num2_d2);
			if (!(num1_d1 == '9' && num1_d2 == '8' && num2_d1 == '9' && num2_d2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			num2_d2++;
			if (num2_d2 > '9')
			{
				num2_d1++;
				num2_d2 = '0';
			}
		}
		num1_d2++;
		if (num1_d2 > '9')
		{
			num1_d1++;
			num1_d2 = '0';
		}
	}
	putchar('\n');
	return (0);
}
