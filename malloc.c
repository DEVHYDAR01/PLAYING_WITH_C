#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, n, *ptr;

	printf("how many blocks do you want\n");
	scanf("%d", &n);
	ptr = (int *) malloc(n * sizeof(int));
	printf("enter your numbers\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("this is your numbers\n");
	for (i = 0; i < n; i++)
	{
		printf("%d", *(ptr + i));
	}
	free(ptr);
	return (0);
}
