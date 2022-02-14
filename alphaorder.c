#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct word
{
	char a[20];
};
int main()
{
	int k,j;
	char temp;
	struct word *p,i;
	i.a[0]='h';
	i.a[1]='e';
	i.a[2]='l';
	i.a[3]='l';
	i.a[4]='o';
	p=malloc(sizeof(5));
	p=&i;
	for(k=0;k<4;k++)
	{
		for(j=0;j<4-k;j++)
		{
			if(p->a[j]>p->a[j+1])
			{
				temp=p->a[j];
				p->a[j]=p->a[j+1];
				p->a[j+1]=temp;
			}
		}
	}
	for(k=0;k<5;k++)
	{
		printf("%c",p->a[k]);
	}

}
