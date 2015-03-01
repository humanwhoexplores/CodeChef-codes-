#include<stdio.h>
using namespace std;

int pos(int a*,int,int);
int integer[100001];
int main()
{   int n,i,j;
	scanf("%d",&n);
	while(n!=0)
	{
	scanf("%d",&n);
	for	(i=1;i<=n;i++)
	{
		scanf("%d",&integer[i]);
		
	}
	for(j=1;j<=n;j++)
	{
       		if(j==check(integer,n,j))
       		{
       			continue;
       		}
       		else
       		{
       			printf("not ambiguous\n");
       		}
	}
	printf("ambiguous\n");
	scanf("%d",&n);	
	}
}

int pos(int *a,int n,int k)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(a[i])
	}
}
