#include<stdio.h>
int chamber[100];
int main()
{
	
	int A,N,K,index=0,i;
	scanf("%d",&A);
	scanf("%d",&N);
	scanf("%d",&K);
	
	while(A>0)
	{  index=0;
		
		
		while(chamber[index]<=N && A>0)
		{
			chamber[index]+=1;
			A--;
		}
		
		if(chamber[index]>N && index<K-1)
		{
			
			chamber[index]=0;
			index++;
			chamber[index]=1;
			
		}
		
		if(chamber[index]>N && index==K-1)
		{
			chamber[index]=0;
			
		}
		
		
	    }
	    
	    
	    for(i=0;i<K;i++)
	    printf("%d\n",chamber[i]);
		
	
}
