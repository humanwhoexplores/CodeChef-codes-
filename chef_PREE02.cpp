#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

 int check(int);

int main()
{
	
	int T,N,i,j,temp,num,total,counter=0,ans;
	scanf("%d",&T);
	for(j=0;j<T;j++)
	
	{   counter=0;
	
		scanf("%d",&N);
	    
		for(i=1;i<=N/2;i++)
		{
			if(N%i==0)
			{
			ans=check(i);
			if(ans==1)
			counter++;	
			}
		}  
		ans=check(N);
		if(ans==1)
		counter++;      
		printf("%d\n",counter);
	}
	
}

int check(int n)
{
	int num,temp;
	num=n;
	
	while(num!=0)
	{
		temp=num%10;
		if(temp==3||temp==5||temp==6)
		{
			return 1;
		}
		num=num/10;
	}
    return 0;	
}
