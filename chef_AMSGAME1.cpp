#include<stdio.h>

int gcd(int a,int b)
{
	if(b==0)
	  return a;
	  return gcd(b,a%b);
	
	
}

int main()
{
	int T,i,j,array[1000],flag,K,min,temp;
	scanf("%d",&T);
	while(T--)
	{   min=1000000007;flag=-10;
		scanf("%d",&K); 
		
		for(i=0;i<K;i++)
		  scanf("%d",&array[i]);
		  
		for(i=0,j=1;j<K;j++)
		{
			
			
			 temp=gcd(array[i],array[j]);
			 if(temp==1)
			 {
				printf("1\n");flag=10;break;
				
		     }
			 else
			 if(temp<min)
			  min=temp;
		    
		}
		if(flag==-10)
		  printf("%d\n",min);
		
	}
	
	
	
	
}
