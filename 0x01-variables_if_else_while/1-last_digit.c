#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: get  the last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = (n % 10);
	/*your code goes here*/
	if (i > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else if (i < 6 && i != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and 0\n", n, i);
	}
	return (0);
}
