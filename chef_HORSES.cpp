#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int T,array[5001],i,j,n,diff,max;
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&n);
		array[0]=0;
		for(i=1;i<=n;i++)
		    scanf("%d",&array[i]);
		    
		    sort(array,array+(n+1));
		    max=array[2]-array[1];
		    for(i=1;i<n;i++)
		    {
		    	diff=array[i+1]-array[i];
		    	if(diff<max)
		    	max=diff;
		    }
		
		printf("%d\n",max);
		
		
		
	}
	
	
}
