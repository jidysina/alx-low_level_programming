#include <stdio.h>
/**
 * main - entry point
 * return :always 0 (sucess)
 */
int main(void)
	/** main is main entry point*/
{
	int n;

	printf("please enter n: ");
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	/** return 0 if successful*/
	return (0);
}
