#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

//int value;

int main()
{
	int value;
	pid_t pid;

	scanf("%d", &value);
	
	pid = fork();
	
	if(pid >  0)
	{
		int result = 0;
		for(int i = 1; i <= value; i++)	result += i;
		printf("parent process result : %d\n", result); 
	}	
	else if(pid == 0)
	{
		int result = 1;
		for(int i = 1; i <= value; i++) result *= i;
		printf("child process result : %d\n", result);
	}
	
	return 0;	
}
