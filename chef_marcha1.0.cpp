#include<stdio.h>
#include<math.h>


int main()
{
	int T,n,m,i,j,flag,array[21],sum;
	scanf("%d",&T);
	while(T--)
	{    flag=-10;
		scanf("%d%d",&n,&m);
		
		for(i=0;i<n;i++)   
		    scanf("%d",&array[i]);
	 
        for(i=1;i<pow(2,n);i++)
        {
        	sum=0;
           for(j=0;j<n;j++)
           {
           	if((i & (1<<j))!=0)
           	    sum+=array[j];
           	
           }
           if(sum==m)
           {
           	flag=10;break;
           }
           
		}

      if(flag==-10)
      printf("No\n");
      else  printf("Yes\n");
      
	
	
    }
    
    
    
 return 0;   
}
