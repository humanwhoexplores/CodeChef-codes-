#include<stdio.h>
#include<math.h>
int main()
{
	int T,array1[10],array2[10],n,k,i,j,wsum,msum,max;
	scanf("%d",&T);
	while(T--)
	{   sum=0;max=0;
		scanf("%d%d",&n,&k);
		
		for(i=0;i<n;i++)
		 scanf("%d%d",&array1[i],&array2[i]);
		 
		 
		 for(i=0;i<pow(2,n);i++)
		 {   wsum=0;msum=0;
		 	for(j=0;j<n;j++)
		 	 {   
  		 	 	if(i&1<<j)
		 	 	{
		 	 		wsum+=array2[j];
		 	 		msum+=array1[j];
		 	 	}
		 	 	if(msum<=k)
		 	 	{
		 	 		if(wsum>max)
		 	 		  max=wsum;
		 	 	}
		 	 }
		 	
		 } 
		  	
		   	 
		 	  
	   printf("%d\n",max);	 
		
	}
	
	
	return 0;
}
