#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (sucess)
 */

/*main is the main entry point*/
int main(void)
{
	int n;

	printf("please enter n: \n");
	scanf("%d\n", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	/** return 0 if successful*/
	return (0);
}
