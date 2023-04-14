#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <math.h>

//int x, y, result1, result2;

int main()
{	
	int x, y, result1 = 1, result2 = 0;
	
	int status = 0;
	pid_t pid;	
	scanf("%d %d", &x, &y);
	
	pid = fork();
	
	if(pid > 0)
	{	
		//sleep(1);
		printf("parent process working\n");
		//result1 = (int)pow(x, y);
		
		for(int i = 1; i <= y; i++)
		{
			result1 *= x;
		}

		wait(&status);
		
		printf("child process finished\n");
		status = status >> 8;
		printf("Result = %d\n", status + result1);
		
	}
	
	else if(pid == 0)
	{
		//sleep(1);
		for(int i = x; i <= y; i++)
		{
			result2 += i;
		}
		exit(result2);
	}

	return 0;
}
