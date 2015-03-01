#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int T,i,j,array[100050],N,max=0,min,diff;
	scanf("%d",&T);
	
	for(j=0;j<T;j++)
	{
		max=0;diff=0;
		scanf("%d",&N);
		
		for(i=1;i<=N;i++)
		     scanf("%d",&array[i]);
		
		if(N>=2)
		{
		min=array[1];
		
		for(i=1;i<N;i++)
		{
		    if(array[i+1]>min)
		    {
		    	diff=array[i+1]-min;
		    	if(diff>max)
		    	max=diff;
            }
            else
            if(array[i+1]<min)
               {
               min=array[i+1];
			   }
		//	printf("\n minimun is=%d",min);
		}
		if(max!=0)
		printf("%d\n",max);
		if(max==0)
		printf("UNFIT\n");
        }
        
        else
        if(N<=1)
        {
        	printf("UNFIT\n");
        }
	}

}
