#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int T,x_co,y_co,i,j,tempx,tempy,X,Y,flag2,flag1,indexi,indexy,lower,upper,min,max,tempo;///  these represent the point to be checked... entered by user
	scanf("%d",&T);
	while(T--)
	{   X=0;Y=0;flag1=-1;flag2=-1;
		scanf("%d%d",&x_co,&y_co);
		
		tempx=abs(x_co); tempy=abs(y_co);
		for(i=1;X<=tempx;i++)
		{    
		     
			if(x_co==X)
			{
				flag1=5;
				flag2=-1;indexi=i-1;
				break;
			}
			if(i%2!=0)   //  i represents the iteration of variation of coordinate of x
			{
			X=i;	
			}
   			else if(i%2==0)
			{
				X=-i;
			}
		
		
			
			
		
		}
		
		
		for(j=1;Y<=tempy;j++)
		{
			
			if(y_co==Y)
			{
				flag2=5;flag1=-1;indexy=j-1;
				break;
			}
			if(j%2==0)
			{
				Y=-j;
			}
			else if(j%2!=0)
			{
				Y=j+1;
				
			}
			
		}
		
		if(flag1==-1 && flag2==-1)
		{
			printf("NO\n");
		}
		else
		if(flag1==5 && flag2==5)
		{
			printf("YES\n");
			
		}
		else
		if(flag1==5 && flag2==-1)
		{
			if(indexi%2==0)
	           {lower=indexi; upper=-indexi;}
		    if(indexi%2!=0)
			{  lower=-indexi+1; upper=indexi+1;}  
			     				
			min=lower;max=upper;
			if(upper<lower)
			{
				tempo=max;
				max=min;
				min=tempo;
			}
			
			if(y_co>=lower && y_co<=upper)
			printf("YES\n");
			else
			if(y_co<lower || y_co>upper)
			printf("NO\n");
			
	
			
		}
		
		
		if(flag2==5 && flag1==-1)
		{
			if(indexy%2==0)
	           {lower=-indexy; upper=indexy+1;}
		    if(indexy%2!=0)
			{  lower=indexy; upper=-indexy-1;}  
			     				
			min=lower;max=upper;
			if(upper<lower)
			{
				tempo=max;
				max=min;
				min=tempo;
			}
			
			if(x_co>=lower && x_co<=upper)
			printf("YES\n");
			else
			if(x_co<lower || x_co>upper)
			printf("NO\n");
			
	
			
		}
		
		
		
	}
	
	
	
}
