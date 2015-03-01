#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int T,N,M,array[100000],hash[100000],i,temp,j,flag,pivot;
	cin>>T;
	while(T--)
	{     
	      cin>>N;cin>>M;
		   for(i=0;i<N;i++)
		       hash[i]=0;
		  
		 
		 for(i=0;i<M;i++)
		   {
		   	scanf("%d",&temp);
		   	  hash[temp]++;
		   }
		    
		 
		 
		  if(N%2!=0)
		 {
		  
		  flag=-1;
		  for(j=N-1; j>=0 && flag==-1 ;j--)
		  {
		  	if(hash[j]>0)
		  	{   flag=1;
		  		pivot=j;
		  		for(i=0;i<=N/2-1;i++)
		  		{
		  			array[i]=pivot-i;
		  		}
		  	    break;
			  }
		  	
		  	
		  }
		  flag=-1;
		  for(j=0;j<N && flag==-1;j++)
		  {
		  	if(hash[j]>0)
		  	{
		  		flag=1;
		  		pivot=j;
		  		for(i=N/2;i<N;i++)
		  		{
		  			array[i]=i-pivot;
		  		}
		  		
		  	}
		  	
		  	
		  }
                		
	    }
	     
		  
		  
		  if(N%2==0)
		  {
		  
		  flag=-1;
		  for(j=N-1; j>=0 && flag==-1 ;j--)
		  {
		  	if(hash[j]>0)
		  	{   flag=1;
		  		pivot=j;
		  		for(i=0;i<=N/2-1;i++)
		  		{
		  			array[i]=pivot-i;
		  		}
		  	    break;
			  }
		  	
		  	
		  }
		  flag=-1;
		  for(j=0;j<N && flag==-1;j++)
		  {
		  	if(hash[j]>0)
		  	{
		  		flag=1;
		  		pivot=j;
		  		for(i=N/2;i<N;i++)
		  		{
		  			array[i]=i-pivot;
		  		}
		  		
		  	}
		  	
		  	
		  }
                		
	     }
	      
	      
	      for(j=0;j<N;j++)
	         printf("%d ",array[j]);
       printf("\n");	
	}
	
	
	return 0;
}
