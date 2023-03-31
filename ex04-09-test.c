#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char buffer[1024];
	int nread;
	
	nread = readlink("./", buffer, 1024);
	
	if(nread != -1) printf("soft link");
	else printf("no soft link");
}
