#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main (int argc, char *argv[])
{
	int id = fork();
	printf("my name is hydar id = %d\n", id);
	return (0);
}
