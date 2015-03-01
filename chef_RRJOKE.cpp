#include<stdio.h>


int main()
{
	int T,N,i,x,y,sum;
	
	scanf("%d",&T);
	while(T--)
	{   sum=1;
		scanf("%d",&N);
		for(i=0;i<N;i++)
          scanf("%d%d",&x,&y);
        
		for(i=2;i<=N;i++)
		{
			sum=sum^i;
		}
		
		
	
	
	printf("%d\n",sum);
	
    }
	
}
