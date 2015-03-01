#include<stdio.h>



int main()
{
	int n,i,temp,X,Y,sum=0;
	scanf("%d%d%d",&n,&X,&Y);
	int array1[n],array2[n];
	
	
	
	for(i=0;i<n;i++)
	   {
	   	scanf("%d",&array1[i]);
	   	
	   }
	for(i=0;i<n;i++)
	   {
	   	scanf("%d",&array2[i]);
	   	
	   }
	
	
	
	for(i=0;i<n;i++)
	{   
	       if(X>=1 && Y>=1)
         {
          if(array1[i]>=array2[i])
		  {
			
			sum+=array1[i];
			X--;
		  }
		  
		 else
		 {
		 	sum+=array2[i];
		 	Y--;
		 }  
		
	     }
	     if(Y>0 && X==0)
	     {
	     	sum+=array2[i];
	     	Y--;
	     }
		if(X>0 && Y==0)
		 {
		 	sum+=array1[i];
		 	X--;
		 	
		 }
		
	}
	printf("%d\n",sum);
}


