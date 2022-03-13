#include <stdio.h>

/**
 *  * main - program that prints all possible combinations of
 *   * two two-digit
 *    * The numbers should range from 0 to 99
 *     * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 *       * Return: 0
 */

int main(void)
{
	int n1 = 48;
	int n2, n3;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55 || n2 != 56 || n3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				n3 += 1;
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');
	return (0);
 }	
