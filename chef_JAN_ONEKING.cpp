#include<stdio.h>

int hash[2001];

int main()
{
	int T,N,a,b,i,etime,count;
	scanf("%d",&T);
	while(T--)
	{   
	     count=0;
		for(i=0;i<=2000;i++) 
		   hash[i]=-1;
		
		
		scanf("%d",&N);
		for(i=0;i<N;i++)
		 {
		 	scanf("%d%d",&a,&b);
		 	
		 	if(b>hash[a])
		 	 hash[a]=b;
		 	 
		 }
		for(i=0;i<=2000;i++)
		{
			if(hash[i]>-1)
			{
				etime=hash[i];
				count++;
				i++;
				break;
			}
		}
	    while(i<=2000)
		{   
		    if(hash[i]==-1)
			{
				i++;
				continue;
			}  
		 
			if(etime>=i)
			 {
			 	i++;
			 	continue;
			 }
			
			if(etime<i)
			 {
			 	etime=hash[i];
			 	count++;
			 	i++;
			 	
			 }
			
		}
		
		printf("%d\n",count);   
		
	}
	
	
	
	return 0;
}
