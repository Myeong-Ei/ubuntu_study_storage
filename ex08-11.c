#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("%s\n", getenv("APPLE"));
	unsetenv("APPLE");
	
	if(!getenv("APPLE"))
	{
		printf("APPLE not found\n");
	}
	
	return 0;
}