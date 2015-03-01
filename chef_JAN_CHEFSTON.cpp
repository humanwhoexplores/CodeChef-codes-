#include<stdio.h>



int main()
{
	
	long long T,N,clock,i,count,time[100001],profit[100001];long long max,temp;
	scanf("%lld",&T);
	while(T--)
	{    max=0;  
		scanf("%lld%lld",&N,&clock);
		
		
		for(i=1;i<=N;i++)
		scanf("%lld",&time[i]);
		    
		for(i=1;i<=N;i++)
		  scanf("%lld",&profit[i]);
		
		for(i=1;i<=N;i++)
		{
			count=clock/time[i];
			temp=count*profit[i];
			if(max<temp)
			 max=temp;
			
			
		}
		
		printf("%lld\n",max);
		
	}
	
	return 0;
	
}
