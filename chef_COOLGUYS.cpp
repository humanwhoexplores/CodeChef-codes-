#include<iostream>
#include<stdio.h>
using namespace std;

long long gcd(long long a,long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
	    
	
} 

int main()
{
	int T,N,i,left,right,temp,temp2,K;long long total,sum,gc;
	scanf("%d",&T);
	while(T--)
	{ sum=0;
		scanf("%d",&N);
		total=N*N;
		for(i=N;i>=1;)
		{    K=N/i;
			left=N/(K+1);right=N/K;
			if(right>left)
			{
				temp=right-left;
				
				sum=sum+K*temp;
				i=i-temp;
				
			}
			     
			
					
		}
		
			
			gc=gcd(total,sum);
			total=total/gc;sum=sum/gc;
		
		
		printf("%lld/%lld\n",sum,total);
		
		
	}
	
	
	
}
