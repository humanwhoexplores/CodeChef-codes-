#include<stdio.h>

int recursion(int);

int main()
{
	int N,sum;
	scanf("%d",&N);
	while(N>0)
	{
		
		
		sum=recursion(N);
         printf("%d\n",sum);		
		scanf("%d",&N);
		
	}
	

	
}

int  recursion(int a)
{
	int sum,temp1,temp2,temp3;
	
	 temp1=a/2;temp2=a/3;temp3=a/4;
	 
	  if((temp1+temp2+temp3)>=a)
	  
	  {
	  	temp1=recursion(temp1);
	  	temp2=recursion(temp2);
	  	temp3=recursion(temp3);
	  	
	  }	  	
	   
	   else if((temp1+temp2+temp3)<a) return a;
	   
	   return(temp1+temp2+temp3);
	
	
}
