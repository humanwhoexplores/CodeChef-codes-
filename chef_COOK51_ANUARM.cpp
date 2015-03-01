#include<stdio.h>
int abs(int a)
{
	if (a>=0)
	 return a;
	 return -a;
	 
}

int maxi(int a,int b)
{
	if(a>=b)
	  return a;
	  
	  return b;
	  
	
	
}

int main()
{
	int t,n,m,max,min,i,ans,array[100000],num[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		
		for(i=0;i<m;i++)
		{
			scanf("%d",&array[i]);
			
		}
		 max=array[0];
		for(i=0;i<m;i++)
		 {
		 	if(array[i]>max)
                max=array[i];
	    }
	     min=array[0];
		for(i=0;i<m;i++)
		{
			if(array[i]<min)
			   min=array[i];
			   
			
		}
		
		for(i=0;i<n;i++)
		{
			ans=maxi(abs(i-max),abs(i-min));
			printf("%d ",ans);
			
			
		}
		
		
		printf("\n");
		
	}
	
	
return 0;
}
