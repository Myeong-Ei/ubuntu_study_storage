#include <stdio.h>
#include <stdlib.h>

char buf[1024];
FILE *fp;

void func();

int main()
{
	fp = fopen("test.txt", "r");
	fgets( buf, sizeof( buf), fp);
	
	printf("%s\n", buf);
		
	atexit(func);

	exit(1);
}

void func()
{
	fclose(fp);
	printf("flie closed\n");
}
