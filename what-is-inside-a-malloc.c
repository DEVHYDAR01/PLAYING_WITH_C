#include <stdio.h>
#include <stdlib.h>
/**
 * This is a progarm to what is inside a malloc
 *
 */

int main(void)
{
	int *ptr;

	ptr = (int *) malloc(sizeof(int) * 3);

	printf("%ls", ptr);

	return (0);
}
