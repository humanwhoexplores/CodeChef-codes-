#include<stdio.h>

int hash[100001];

int main()
{
	int T,N,K,i,array[100000];
	long long S,newS;
	scanf("%d",&T);
	while(T--)
	{   
		scanf("%d%d",&N,&K);
		
		for(i=0;i<K;i++)
		{
			scanf("%d",&array[i]);
			hash[array[i]]=-1;
			
		}
		
		
		S=0; newS=0;
		for(i=1;i<=N;i++)
		{
			 if(hash[i]==-1)
			    continue;
			if(i<=S+1)
			  newS+=i;
			if(S==newS)
			  break;
			  
			S=newS;  
			
		}		
		S=S+1;
		if((S&1)==0)
		 printf("mom\n");
		 if((S&1)!=0)
		  printf("chef\n");
		
		
		for(i=0;i<K;i++)
		   hash[array[i]]=0;
		 
	}
	
	
	return 0;
}
