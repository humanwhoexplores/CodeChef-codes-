#include<stdio.h>

int main()
{
	int T,flag1,flag2,flag3,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		if(360%N==0)
		    flag1=1;
		 else if(360%N !=0)
		    flag1=-1;
	   
	   if(N>360)
	   flag2=-1;
	   else if(N<=360)
	   flag2=1;
	   		   
	   if(N<=26)
	    flag3=1;
	    else if(N>26)
	   flag3=-1;
	 		
	  if(flag1==1)
	  printf("y ");
	  else if(flag1==-1)
	  printf("n ");
	  
	  if(flag2==1)
	  printf("y ");
	  else if(flag2==-1)
	  printf("n ");
	  
	  if(flag3==1)
	  printf("y ");
	  else if(flag3==-1)
	  printf("n ");
	  	
		
	}
	
	
}
