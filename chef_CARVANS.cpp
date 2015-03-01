#include<stdio.h>

int main()
{
	int T,N,array[10000],i,count;
	scanf("%d",&T);
	while(T--)
	{   count=0;
		scanf("%d",&N);
		//scanf("%d",&array[0]);
		//count+=1;  //  first car moves at max speed
		for(i=1;i<N;i++)
		{
			scanf("%d",&array[i]);
	    }
	    for(i=1,count=1;i<N;i++)
			{
			if(array[i]<=array[i-1])
			     {
			     count+=1;
			     }
			if(array[i]>array[i+1])
			     {
			     array[i]=array[i-1];  
			     
				 }
		}
		
		printf("%d\n",count);
		
	}
	
	
}
