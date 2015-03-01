#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int T,x,y,i,j,temp,find;
	scanf("%d",&T);
	while(T--)
	{
		temp=0;
		scanf("%d",&x);
		scanf("%d",&y);
		
		x=abs(x);
		y=abs(y);
		
		if(x==0 && y>0)
		{
			if(y%2==0)
			temp=temp+2*y;
			else
			temp=temp+2*y-1;
			
			
			
		}
		if(y==0 && x>0)
		{
			if(x%2==0)
			temp+=x*2;
			else
			temp+=x*2+1;
			
		}
		
		if(x>0 && y>0)
		{
			find=min(x,y);
			
			x=x-find;
			y=y-find;
			temp+=2*find;
		
		    if(x==0 && y>0)
		{
			if(y%2==0)
			temp=temp+2*y;
			else
			temp=temp+2*y-1;
			
			
			
		}
		if(y==0 && x>0)
		{
			if(x%2==0)
			temp+=x*2;
			else
			temp+=x*2+1;
			
		}
		
		
		
		
		
		
		
		}
		
		printf("%d\n",temp);
	}
	
	
}
