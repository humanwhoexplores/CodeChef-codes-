#include<stdio.h>



int main()
{
	int  T,N,X,sum,i,nos,temp,diff,min,ans;  ///  nos number of sweets which he can buy
	scanf("%d",&T);
	int array[101];
	
	while(T--)
	{ sum=0;
		scanf("%d",&N);scanf("%d",&X);
		
		for(i=1;i<=N;i++)
		{
		
			scanf("%d",&array[i]);
		   sum+=array[i];			
		
	    }
		
		nos=sum/X;
		
		
		temp=nos*X;
		
		diff=sum-temp;
		min=array[1];
		for(i=1;i<=N;i++)
		{
			if(array[i]<min)
			  {min=array[i];}
		}
		
		
		
			
		if(diff>=min)
		ans=-1;	
			
		
		
		else
		if(diff==0)
		ans=nos;
		
		else
		if(diff<min)
		ans=nos;
		
		
		
		
		printf("%d\n",ans);
		
	}
	
}
