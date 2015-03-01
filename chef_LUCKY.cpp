#include<stdio.h>

int main()
{
	int T,N,count,temp,loop,flag;
	scanf("%d",&T);
	while(T--)
	{   
		scanf("%d",&N);
		
		if(N%4==0)
		count=0;
		else if(N==7)
		 count=7;
		 
		else
		{  temp=N;loop=0;flag=-10;
			while(temp>=7)
			{
				temp=temp-7;loop++;
				if(temp%4==0)
				 {
				 	flag=1;
				 break;
			     }
				
			}
		   if(flag==1) count=7*loop;
           else if(flag==-10) count=-1;  		
		} 
		
		printf("%d\n",count);
		
		
	}
	
	
}
