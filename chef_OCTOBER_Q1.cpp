#include<stdio.h>

int main()
{
	int T,array[100],i,N,M,max,count;
	scanf("%d",&T);
	while(T--)
	{
		count=0;
		scanf("%d%d",&N,&M);
		for(i=0;i<N;i++)
		  scanf("%d",&array[i]);
		  max=array[0];
		  
		  for(i=0;i<N;i++)
		   {
		   	if(array[i]>max)
		   	   max=array[i];
		   	   
		   }
		for(i=0;i<N;i++)
		   {
		   	   count+=max-array[i];
		   }
		
		if(M<count)
		 printf("No\n");
		 
		else 
		{
			M-=count;
			if(M%N==0)
			printf("Yes\n");
			else
			printf("No\n");
				
			
			
		} 
		
	}
	
	
	
	return 0;
}
