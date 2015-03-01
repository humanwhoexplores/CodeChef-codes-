#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;



int main()
{
	int T,N,x,y,z,a,b,i,j,mid,l;
	scanf("%d",&T);
	while(T--)
     { int array[100000],ans[100000];
		scanf("%d",&N);
		
		for(j=0;j<N;j++)
		    scanf("%d",&array[j]);
		    
		sort(array,array+N);
		
		
		if(N%2!=0)
		{
		mid=N/2;
		for(x=0,y=mid+1,z=0;x<=mid||y<=N-1;x++,y++)
		{
			
			ans[z]=array[x];
			z+=1;
			ans[z]=array[y];
			z+=1;
			
			
			
		}    
	    }
	    else
	    if(N%2==0)
	    {  mid=N/2;
	    	for(a=0,b=mid,l=0;a<=mid||b<=N-1;a++,b++)
	    	{
	    		ans[l]=array[a];l+=1;
	    		ans[l]=array[b];l+=1;
	    		
	    	}
	    	
	    	
	    }
	    
		for(i=0;i<N;i++)
		{
			printf("%d ",ans[i]);
			
		}
	}
	
}
