#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	
	int T,N,M,i,var,array[20],temp,sum;
	scanf("%d",&T);
	while(T--)
	{  sum=0;
		scanf("%d",&N);scanf("%d",&M);
		for(i=0;i<N;i++)
		  scanf("%d",&array[i]);
		  
		sort(array,array+N);
		  var=M;
		  while(var>0)
		 {
		  
		if(var<array[0])
		    break;
		 else if(var>array[0])
		 {
		    
		for(i=0;i<N-1;i++)
		{
		     if(array[i]<=var && array[i+1]>=var)
		          {
		          	var=var-array[i];break;
		          }
			 	
		}
	     if(i==N-1 && var>0 && array[N-1]<=var)
	     {
	     	var=var-array[i];
	     }
	     
		 }
		
	    }
		if(var==0)
		{
			printf("Yes\n");
		}
		if(var>0)
		    printf("No\n");
		    
		
	}
	
}
