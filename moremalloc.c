#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i, n;
	char *ptr;
	char str [] = "hydar";
	char name;

	printf("enter how many\n");
	scanf("%d", &n);
	ptr = (char *) malloc(n * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		name = str[i];
		//printf("%c", name);
	}
	
	for (i = 0; ptr[i] < n; i++)
	{
		ptr[i];
		name = ptr[i];
		printf("%c", name);
	}
	return (0);
}
