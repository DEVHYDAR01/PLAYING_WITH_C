#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	int i, n;
	char *ptr;
	char str [] = "hydar";
	int length = strlen(str);

//	printf("enter how many\n");
//	scanf("%d", &n);
	ptr = (char *) malloc(n * sizeof(char));
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		name = str[i];
//		printf("%c", name);
//	}
	
	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}
	printf("copied string %s\n", ptr);
	return (0);}
