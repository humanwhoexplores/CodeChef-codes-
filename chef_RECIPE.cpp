#include<iostream>
#include<stdio.h>
using namespace std;



int main()
{
	
    int T,N,i,j,x,y,z,size,divisor=1,counter=0,num[55],min;	
	scanf("%d",&T);
	for(z=0;z<T;z++)
	{ counter=0;divisor=1;
		scanf("%d",&size);
		for(i=1;i<=size;i++)
		{
		scanf("%d",&num[i]);
	    }
	     min=num[1];
	     for(i=1;i<=size;i++)
	     {
	     	if(num[i]<min)
	     	{
	     		min=num[i];
	     	}
	     }
		   j=2;
		  while(j<=min)
		  { counter=0;
		  	//cout<<"\n value of j is="<<j;
		  	for(i=1;i<=size;i++)
		  	{
		  		if(num[i]%j==0)
		  		{
		  		counter++;
		  	    }
		  	}
		  	//cout<<"\n counter is"<<counter;
		  	if(counter==size)
		  	{
		  	divisor=j;
		    }
		  	j++;
		  	
		  	
		  }
		  			
		for(i=1;i<=size;i++)
		{
		num[i]=num[i]/divisor;	
	    }
		
		
		for(i=1;i<=size;i++)
		  printf("%d ",num[i]);
		
		
		
		
	}
}
