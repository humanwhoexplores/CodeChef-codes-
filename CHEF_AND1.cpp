#include<stdio.h>

int main()
{
	int N,i,j,array[100001],sum=0;
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	   scanf("%d",&array[i]);
	
	for(i=0;i<N-1;i++)
	{
		 for(j=i+1;j<N;j++)
		 {
		 	sum+=array[i]&array[j];
		 }
		  
		
	}
	printf("%d\n",sum);
	
	return 0;
}
