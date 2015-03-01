#include<stdio.h>

int main()
{
	int array[100000],N,sum=0,i,j;
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	    scanf("%d",&array[i]);
	
	for(i=0;i<N;i++)
	    {
	       for(j=i+1;j<N;j++)
	       {
	       	if(array[i]&array[j]>0)
	       	    sum+=1;
	       }
	    }    
	
	printf("%d\n",sum);
	
	
}
