#include<stdio.h>
int main()
{
	int temp=1;
	char *p;
	p=&temp;
	if(*p==1)
		printf("little endian");
	else
		printf("big endian");
}
