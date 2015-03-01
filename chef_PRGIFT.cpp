#include<stdio.h>

int main()
{
	int t,n,k,array[50],i,count;
	scanf("%d",&t);
	while(t--)
    {   count=0;
    	scanf("%d%d",&n,&k);
    	for(i=0;i<n;i++)
    	  scanf("%d",&array[i]);
    	  for(i=0;i<n;i++)
    	    {
    	    	if((array[i]&(1<<1))==0)
    	    	   count++;
				 
			//	 count++; 
    	    }
    	  
    	  if(count>=k)
    	   printf("YES\n");
    	   else
    	   printf("NO\n");
    	  
    	  
    }    
	
	
	
	return 0;
}
