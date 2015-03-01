#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int N,sides[2000],i,j,f,a,b,temp,temp2,count=0;
	scanf("%d",&N);
	while(N>0)
	{
	count=0;
	for(i=0;i<N;i++)
	    scanf("%d",&sides[i]);
	
	sort(sides,sides+N);
	
	for(i=0;i<=N-3;i++)
	{
		for(j=i+1;j<N-1;j++)
		{
		
		a=sides[i];b=sides[j];
		temp=a+b;
		f=j+1;
			
			
		while(f<=N-1)
		{
		   if(temp>=sides[f])
		   {
		   	f++; continue;
		   }
		   if(temp<sides[f])
		    {   temp2=N-f;count+=temp2;break;   }
			
	    }
	      
	      
		}
		
	}
	
	printf("%d\n",count);
    scanf("%d",&N);
    
	}
    
    
	}
