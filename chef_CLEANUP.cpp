#include<iostream>
#include<stdio.h>

using namespace std;

int count[1050];


int main()
{
	
	int T,m,n,i,j,temp,index,index2;
	scanf("%d",&T);
	for(j=0;j<T;j++)
    {   
	    count[1050]={0};
       
		scanf("%d",&n);
		scanf("%d",&m);
		
	    
		for(i=0;i<m;i++)
		{
			scanf("%d",&temp);
			count[temp]++;
			
		} 	
		
		for(i=1;i<=n;i++)
		{
			if(count[index]==0)
			{
			index=i;
			break;
		    }
		
		}
		
			
		
		
		
				
		for(;index<=n;index+=2)
		{
			if(count[index]==0)
			{
				printf("%d\n",count[index]);
				count[index]++;
				
			}
			if(count[index]!=0)
			{
				printf(" \n");
			}
		}
		
		for(i=1;i<=n;i++)
		{
			if(count[i]==0)
			{
			index=i;
		     break;
			 }
		}
		for(;index<=n;index+=2)
		{
			if(count[index]==0)
			{
				printf("%d\n",count[index]);
				count[index]++;
			}
		    
		    if(count[index]!=0)
		      {
		      printf(" \n");
		      }
		}
		
	}
}
