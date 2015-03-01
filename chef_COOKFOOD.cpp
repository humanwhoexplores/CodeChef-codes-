#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int T,N,K,i; long long sum,temp1;
	scanf("%d",&T);
	while(T--)
	{   sum=0;temp1;
		scanf("%d",&N);scanf("%d",&K);

           sum=sum+K*(K-1);
           //sum=sum%1000000007;
           
           temp1=(K-2)*(K-2)+K-1;
           temp1=temp1%1000000007;
           














	/*	sum=sum+K*(K-1);
		sum=sum%1000000007;
		for(i=0;i<N-1;i++)
		{
			temp1=temp1*((K-2)*(K-2)+K-1);
			temp1=temp1%1000000007;
			
	     this code works....    this is slow works in O(n) time 
		    the other code    works    in   O(log n)	time	
	   		
	 	}
		sum*=temp1;
		sum=sum%1000000007;
		printf("%lld\n",sum);
	
	
	
	*/	
		
		
		
		
	}
	
	
	
	
}
