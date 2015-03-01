#include<stdio.h>

int main()
{
	int N,j,A,B,max,min;
	scanf("%d",&N);
	
	for(j=0;j<N;j++)
	{
		scanf("%d",&A);
		scanf("%d",&B);
		
		min=A;
		if(B>A)
		{
			min=B;
		}
		
		max=B+A;
		printf("%d\n",min);
		printf("%d\n",max);
	}
	
}
