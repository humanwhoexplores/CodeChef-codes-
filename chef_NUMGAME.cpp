#include<iostream>
#include<stdio.h>

using namespace std;

int divisor(int);

int main()
{
	int N,i,j,num,ans,counter;
	scanf("%d",&N);
	for(j=0;j<N;j++)
	{ counter=0;
		scanf("%d",&num);
		while(num>1)
		{
			ans=divisor(num);
			
			num=num-ans;
			counter++;
	 	    	
	    }
		if(num==1)
		{
			if(counter%2==0)
			printf("BOB\n");
			else
			if(counter%2!=0)
			printf("ALICE\n");
			
		}
	}
	
}

int divisor(int n)
{   int max=0,i;
     
     
	 if(n==2)
     return 1;
	for( i=2,i<n;i<=n/2;i++)
	{
		if(n%i==0)
		{
			max=i;
		}
	}
	if(max!=0)
	return max;
	if(max==0)
	return 1;

	
	
}
