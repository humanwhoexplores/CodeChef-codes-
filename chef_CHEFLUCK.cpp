#include<stdio.h>

int main()
{
	int T,N,count4;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		count4=N-N%7;;
		count4=count4-((N-count4)%4)*7;// it adds the count which can make count7%4==0
		if(count4>=0)
		printf("%d\n",count4);
		else 
		printf("-1\n");
	}
	
	
	return 0;
}
