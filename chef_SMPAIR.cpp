#include<stdio.h>
#include<malloc.h>

int main()
{
	
	int T,i,min1,min2,ans,temp,index1,index2;
	int N,*array;
		
	scanf("%d",&T);
	while(T--)
	{    
		scanf("%d",&N);
		array=(int *)malloc(sizeof(int )*N);
		
		for(i=0;i<N;i++)
		   scanf("%d",&array[i]);
			
	    min1=array[0];index1=0;  		
		for(i=0;i<N;i++)	
		{
			if(array[i]<min1)
		    {min1=array[i];index1=i;}
			
		}
		
		temp=array[index1];
		array[index1]=array[N-1];
		array[N-1]=temp;
		
		min2=array[0];
	
		for(i=0;i<N-1;i++)
		{
			if(array[i]<min2)
			min2=array[i];
			
		}
		ans=min1+min2;
		printf("%d",ans);
		
		
		
		
	}
	
}
