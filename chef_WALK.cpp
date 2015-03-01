#include<stdio.h>

int main()
{
	int T,N,i,max,array[100000],S;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		  scanf("%d",&array[i]);
		
		max=-1;
		for(i=0;i<N;i++)
		 {  S=i+array[i];
		 	if(max<S)
		 	  max=S;
		 }
		printf("%d\n",max);
	}
	
	return 0;
}

