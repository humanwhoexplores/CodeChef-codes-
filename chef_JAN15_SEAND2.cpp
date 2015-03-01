#include<stdio.h>
#include<string.h>


long long cal(char *B,int A)
{   
    int i=0,d=0;
	for(i=0,d=0;B[i]!='\0';i++)
		{   
		    d=10*d+(int)B[i]-48;
		    d=d%A;
		} 	
		
	
	return d;
}

int main()
{
	int T,N,i,len,array[100];
    long long ans;
	char  str[1001];
	scanf("%d",&T);
	while(T--)
	{   ans=0;
		scanf("%s%d",str,&N);
		for(i=0;i<N;i++)
		 scanf("%d",&array[i]);
		 
		 
		for(i=0;i<N;i++)
		 {
		 	ans+=cal(str,array[i]);
		 	
		 }
		
		
		printf("%lld\n",ans);
		
		
		
	}
	
	
	
	return 0;
}
