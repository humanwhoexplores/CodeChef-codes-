#include<stdio.h>

int abs(int a)
{
	if (a<0)
	  return -a;
	  else
	  return a;
}
int main()
{
	
	int T,N,i,j,count,dino,index,array[100000];
	scanf("%d",&T);
	while(T--)
	{    count=0;
		scanf("%d",&N);
		
		for(i=0;i<N;i++) 
		 scanf("%d",&array[i]);
		 
		 for(i=0;i<N;i++)
		 {
		 	if(array[i]<0)
		 	  {
		 	  	dino=abs(array[i]);    //    dino is the absolute value of negative
		 	  	index=i;
		 	  }
		 	  
		 	  
			 for(j=0;  j<N && dino>0;j++)
		 	{
		 		if(array[j]>0)
		 		{
		 		    if(array[j]>=dino)
					 {  
					    
					 	array[j]=array[j]-dino;
					 	count+=dino*abs(j-index);
					    dino=0;
					    array[index]=0;
					 
					 } 	
		 			
		 			if(array[j]<dino)
		 			{    count+=(dino=array[j])*abs(j-index);
					     array[j]=0;
		 			    
		 				dino-=array[j];
		 				array[index]+=array[j];
		 				
		 				
		 			}
		 			
		 		}
		 		
		 		
		 	}
		 	
		 }
	    	
		
		printf("%d\n",count);
		
	}
	
	
	return 0;
}
