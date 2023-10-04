#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	FILE *fp = NULL;
	char ch;
	char str[50];

	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
	
		printf("error");
		exit(1);
	}
	while (!feof(fp))
	{
		fgets(str,5,fp);
		printf("%s", str);
	}
/*	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);
*/

	return (0);
}
