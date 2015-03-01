#include<stdio.h>
#include<math.h>
 
 
 
int counter(int *arr, int n,int max)
{
	 int i,j,sum,count=0;
        for(i=1;i<pow(2,n);i++)   ///   i=0 IS THE NULL SET
        {
        	sum=0;
           for(j=0;j<n;j++)
           {

           	if((i & (1<<j))!=0)
           	    sum+=arr[j];
           	
           }
           if(sum==max)
           {
           	count++;
           }
           
		}
 
	return count;
	
} 
 
 
int main()
{
	int T,n,max,k,i,array[21],ans;
	scanf("%d",&T);
	while(T--)
	{    
		scanf("%d%d",&n,&k);
		
		for(i=0;i<n;i++)   
		    scanf("%d",&array[i]);
	 
       max=array[0];
	   for(i=0;i<n;i++)
	   {
	   	if(array[i]>max)
	   	  max=array[i];
	   }  
 
       ans=counter(array,n,max);
       
       if(ans==k)
       printf("yes\n");
       if(ans<k)
       printf("no\n");
	
	
    }
    
    
    
 return 0;   
} 
