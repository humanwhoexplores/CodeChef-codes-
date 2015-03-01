#include<stdio.h>

int main()
{
	
	int N,array[100000],count,temp,i;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	  scanf("%d",array[i]);
	
	temp=0; count=0;
	
    
	 
	for(i=0;i<N;i++)
	{
		if(array[i]==0)
		{
			temp=0;
			
		}
		
		if(array[i]>0)
		{
			temp++;
			if(temp>count)
			  count=temp;
		}
		
	}
	

   printf("%d\n",count);	
	
 	
	
	return 0;
}
