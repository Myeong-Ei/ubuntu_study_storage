#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char buffer[1024];
	int nread;
	
	nread = readlink(argv[1], buffer, 2014);
	
	write(1, buffer, nread);
}
