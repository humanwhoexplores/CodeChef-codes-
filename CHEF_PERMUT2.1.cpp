#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int array1[100050],array2[10050];

int main()
{
	
int n,i,j,temp,counter=0;
scanf("%d",&n);

if(n==0)
exit(0);

else


if(n!=0)
{


for(i=1;i<=n;i++)
{
	scanf("%d",&array1[i]);
	temp=array1[i];
	array2[temp]=i;
	
}	
	
for(i=1;i<=n;i++)
{
	if(array1[i]==array2[i])
	{
		counter++;
	}
	else
	{
		printf("not ambiguous\n");
	  break;
	}
	
}	
if(counter==n)
{
	printf("ambiguous\n");
	
}	

}

	
}
