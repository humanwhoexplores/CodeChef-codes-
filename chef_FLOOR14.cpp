#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int T,M,i,j;
	long long N,temp1,temp2,temp3,sum=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld",&N); 
		scanf("%d",&M);
		temp1=1;
		
		for(i=1;i<=N;i++)
		{   temp1=1;
			for(j=1;j<=4;j++)
			{
				temp1=temp1*i;
				temp1=temp1%M;
			}
			temp2=N/i;
			temp2=temp2%M;
			temp3=temp1*temp2;
			temp3=temp3%M;
			
    		sum=sum+temp3;
		
	      }
		
		sum=sum%M;
		printf("%lld\n",sum);
	}
	
	
}
