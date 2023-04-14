#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

int main()
{	
	FILE *fp = fopen
	
	time_t result = time(NULL);
	char buffer[1024] = {};
	strcpy(buffer, asctime(localtime(&result)));
	
	printf("%s", buffer);
	
	return 0;
}
