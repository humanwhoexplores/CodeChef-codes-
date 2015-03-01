#include<stdio.h>
#include<iostream>

using namespace std;

int check(int *,int,int);

int main()
{
	int T,N,X,i,j,sum,temp=0,ans;
	scanf("%d",&T);
	while(T--)
	{    int multi=0;
		sum=0;temp=0;
        int money[101];
		scanf("%d",&N);
		scanf("%d",&X);
		
		for(i=1;i<=N;i++)
		   {
		   scanf("%d",&money[i]);
	       sum+=money[i];
		   }
		   
	    
	         
	    	
	    	while(temp<=sum)
	    	{    
	    	     multi++;
	    		temp=temp+X*multi;
	    		
	    		
	    	}
	    	
			int nos=multi-1;  ///  number of sweets  which can be bought
			
			temp=X*nos;
			int diff=sum-temp;
			if(diff==0)
			{
				printf("%d\n",nos);
				
			}
			else
			if(diff>0)
			{
				ans=check(money,N,diff);
				if(ans==-1)
				printf("-1\n");
				else
				printf("%d\n",nos);
				
			}
			
			
			
	    	
	        
		
		
	}
	
}


int check(int *ar,int size,int item)
{
	int i=1;
	
	for(i=1;i<=size;i++)
	{
		if(ar[i]==item)
		return -1;
		else
		continue;
	}
	return 1;
	
}
