#include <stdio.h>
#include <stdlib.h>
/**
 * This is a progarm to what is inside a malloc
 *
 */

int main(void)
{
	int *ptr, i;

	ptr = (int *) malloc(sizeof(int) * 3);
	for (i = 0; ptr[i] < 2; i++)
	{
		printf("%d\n", ptr);
	}

	return (0);
}
