#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int retfork;

	if((retfork = fork()) < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if(retfork == 0)
	{
		printf("I am in child process\n");
	}
	else
	{
		printf("I am in parent process\n");
	}
	
	return 0;
}

