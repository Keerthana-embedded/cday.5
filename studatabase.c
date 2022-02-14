#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student* input(struct student *,int );
struct student* inputdata(struct student *,int);
void print(struct student *,int);
struct student
{
	char name[10];
	char branch[3];
	float cgpa;
};
int main()
{
	struct student *p;
	int n;
	printf("enter no of records");
	scanf("%d",&n);
       p= input(p,n);
       p=inputdata(p,n);
        print(p,n);
}
struct student* input(struct student *p,int n)
{
	int i;
	p=malloc(sizeof(struct student)*n);
	return p;
}
struct student* inputdata(struct student *p,int n)
{
	int i;
	printf("enter record details\n");
	for(i=0;i<n;i++)
	{
	printf("enter name");
	scanf("%s",p[i].name);
	printf("enter branch");
	scanf("%s",p[i].branch);
	printf("enter cgpa");
	scanf("%f",&p[i].cgpa);
	}
	return p;
}
void print(struct student *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  %s %s %f\n",i,p[i].name,p[i].branch,p[i].cgpa);
	}
}

