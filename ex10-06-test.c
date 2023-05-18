#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

void handler(int signum)
{
	printf("[parent] bye!!");
}

int main()
{
	pid_t pid;
	struct sigaction act;
		
	sigfillset(&(act.sa_mask));
	act.sa_handler = handler;
	sigaction(SIGINT, &act, NULL);
	
	pid = fork();
	
	if(pid > 0)
	{
		pause();
		//printf("[parent] bye!\n");
	}
	else if(pid == 0)
	{
		pid_t parent = getppid();
		printf("child process killed\n");
		kill(parent, SIGINT);
	}
	else
	{	
		printf("fail to fork\n");
	}
	return 0;
}
