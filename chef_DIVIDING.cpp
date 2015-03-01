#include<stdio.h>

int main()
{
	int N,i;char ch; long long sum=0,ans,temp;
	
	scanf("%d",&N);
	ans=(N*(N+1))/2; //printf("%d\n",ans);
	for(i=0;i<N;i++)
	{   scanf("%lld",&temp);
		//ch=getchar();
		//temp='ch'-48;
		sum+=temp;
	}
	//printf("%d\n",sum);
	if(sum==ans)
	printf("YES\n");
	else 
	printf("NO\n");
	
	return 0;
}
