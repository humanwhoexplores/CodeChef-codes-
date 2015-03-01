#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int N,K,min,j=0,k,max,temp,factor,index,array[100000],i,diff[50],count[50];
	cin>>N>>K;
	for(i=0;i<50;i++)  
	    count[i]=0;
	for(i=0;i<N;i++)
	    scanf("%d",&array[i]);
	    
       for(i=0;i<N-1;i++)
       {
       	
       	temp=array[i+1]-array[i];
       	   if(temp<0)
       	   temp=temp*-1;
       	   
       	   if(j==0)
		   {
		   diff[j]=temp;count[j]++;j++;
       	    }
       	
       	   if(j>0)
       	   {
       	   	
       	   	for(k=0;k<j;k++)
       	   	{
       	   		if(temp==diff[k])
       	   		    break;
       	   		
					      
       	   	}
       	   	if(k==j)
       	   	  {
       	   	  	diff[j]=temp;count[j]++;j++;
       	   	  }
       	   	
       	   }
       	
       	
       }
     	
	max=count[0];index=0;
	for(j=0;count[j]!='\0';j++)
	    {
	    	if(count[j]>max)
	    	  {
	    	  	max=count[j];index=j;
	    	  }
	    }
	    
	factor=diff[index];
	
	for(i=0;i<N-1;i++)
	{
		if(i==0)
		
		else
		if(i>=1)
		{
			if((array[i]-array[i-1])==fact
			
		}
		
       		
		
		
		
	}
	
	
	
	
	
}
