#include<stdio.h>


int main()
{
	int N,M,i,front,rear,temp,n,array[100000],value;
	char query;
		
	front=0;rear=N-1;
	
		scanf("%d",&N);
		scanf("%d",&M);
		n
		for(i=0;i<N;i++)
	        scanf("%d",&array[i]);
		
		    for(i=0;i<M;i++)
		    {    
		    	scanf("%c",&query);
		    	scanf("%d",&value);
		    	
		    	if(query=='A')
		    	{
		    		for(n=1;n<=value;n++)
		    		{
		    			if(rear==N-1)
						
							rear=0;
						
						else if(rear!=N-1)
						    rear++;
						if(front==N-1)
						   front=0;
						else if(front!=N-1)
						    front++;       
						  
		    		}
		    	}
		    	
		    	if(query=='C')
		    	{   
		    		for(n=1;n<=value;n++)
		    		{
		    			
		    			  
		    		
					
						  
		    		}
		    		
		    		
		    	}
		    	if(query=='R')
		    	{   temp=ptr;
		    		for(n=1;n<value;n++)
		    		{
		    			if(temp==N-1)
		    			    temp=0;
		    			else
						temp++;    
		    		}
		    		
		    	   printf("%d\n",array[temp]);	
		    	}
		    }
		
		
		
		
		
		
	
	
	
}



