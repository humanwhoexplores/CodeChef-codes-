#include<stdio.h>

int main()
{
	int T,G,L,N,Q,head,tail,flag,divisor;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&G);
		while(G--)
		{
		head=0;tail=0;
		scanf("%d%d%d",&L,&N,&Q);
		
		if(L==1)
		 {flag=1;
		 head+=N;
	     }
		if(L==2)
		 {flag=2;
		 tail+=N;
	     }   
	      
		    divisor=N/2;
		    
		    if(N==1)
		    {
		    	if(flag==1)
		    	{
		    		head=0;tail=1;
		    	}
		    	if(flag==2)
		    	{
		    		head=1;tail=0;
		    	}
		    }
		    else
		    if(N>1)
		    {
		    
		   if(flag==1)
		   {
		   	
		   	if(N%2==0)
		   	{
		   		
		   		head=head-divisor;
		   		tail=divisor;
		   		
		   	}
		   	if(N%2!=0)
		   	{
		   		head=head-divisor-1;
		   		tail=divisor+1;
		   		
		   	}
		   	
		   }
		   
		   
		   else
		   if(flag==2)
		   {
		   	if(N%2==0)
		   	{
		   		tail=tail-divisor;
		   		head=divisor;
		   	}
		   	if(N%2!=0)
		   	{
		   		tail=tail-divisor-1;
		   		head=divisor+1;
		   	}
		   	
		   	
		    }
				
	        }
		    if(Q==1)
			printf("%d\n",head);
			if(Q==2)
			printf("%d\n",tail);
				
		
								
				
				
				
				
				
			
		
		    }
		
		
	    }
	}
	
