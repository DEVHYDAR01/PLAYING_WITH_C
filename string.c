#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i, j;
	char name, name1;

	char str [] = "hey baby";
	char *ptr = (char *) malloc(9 * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		name = str[i];
	}

	for(j = 0; ptr[j] <= 9; j++)
	{
		name1 = ptr[j];
		printf("%c", name1);
	}


	return (0);
}
