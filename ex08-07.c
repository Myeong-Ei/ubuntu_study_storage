#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	printf("getpgrp():%d\n", getpgrp());
	printf("getpgid(0):%d\n", getpgid(0));
	printf("getpgid(getpid()):%d\n", getpgid(getpid()));

	return 0;
}
