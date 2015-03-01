#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int T,N,i,j,array[1000000];long long sum=0;
	scanf("%d",&T);
	while(T--)
	{
	
		scanf("%d",&N);
		for(i=0;i<N;i++)
		    scanf("%d",&array[i]);
		    
		for(i=0;i<N;i++)
		{
			for(j=i;j<N;j++)
			
				sum=sum+array[i]^array[j];
			
			
		}
		
		
		
		cout<<sum;
		
	}
	
	
	
	
}
