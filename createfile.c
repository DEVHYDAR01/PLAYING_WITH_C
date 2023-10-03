#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;

	char ch = 'a';
	char str[50] = "hydar";
	int num = 45;
	fp = fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("error");
		exit (1);
	}

	fprintf(fp,"%d,%s", num, str);

	fclose(fp);
	return (0);

}
