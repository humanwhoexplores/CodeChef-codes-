#include<stdio.h>
#include<math.h>
int main()
{
	int T,i,array[100000],n,max,count=0; long long ans;
	scanf("%d",&T);
	while(T--)
	{  count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  scanf("%d",&array[i]);
		  
		  max=array[0];
		  for(i=0;i<n;i++)
		   {
		   	if(array[i]>max)
		   	   max=array[i];
		   }
		  
		for(i=0;i<n;i++)
		{
			if(array[i]==max)
			   count++;
		}
		
		
		ans=pow(2,count)-1;
		
		
		printf("%lld\n",ans);
	}
	
	return 0;
}
