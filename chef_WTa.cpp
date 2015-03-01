
#include<stdio.h>


int main()
{
    int  T,N;long long ans,temp;
	scanf("%d",&T);
	while(T--)
	{
		
		scanf("%d",&N);
		temp=(N*(N+1))/2;
		ans=N+temp;
		printf("%d\n",ans);
		
		
	}	
	
	return 0;
}
