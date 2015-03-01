#include<stdio.h>
//#include<cstdlib>
using namespace std;

//int *count;
int goal[100050];
int count1[50000000];int count2[500000000];
//count=malloc(sizeof(int)*500000000);
//int size=500000000;
//count=new int[size];
int main()
{
     // int *count;
	 //count=new int[500000000];	
	//int count[1000000];
	int T,N,i,j,max,max1,max2,x,y,start1=1,start2,diff;
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{   
	start1=1;start2=1;
		scanf("%d",&N);                   ///   number of matches played
		for(i=1;i<=N;i++)
		{
			scanf("%d",&goal[i]);
			
		}
	
	if(N<2)
	printf("UNFIT\n");
	else
	if(N>=2)
	{   
	    
		
		for(x=1;x<N;x++)
		{
		 
		for(i=x+1;i<=N;i++)                       //  test case 1 2 3 4 5 ///  check for it
		{
			
				diff=goal[i]-goal[x];
				
				if(diff>0&&start1<500000000)
				{count1[start1]=diff;
				   start1++;
				   
				}
				else
				if (diff>0&&start2<500000000)
				{
					count2[start2]=diff;
					start2++;
				}
		}
		
	    }
		
		max1=count1[0];
		for(i=1;i<=start1;i++)
		{
			if(count1[i]>max)
			max=count1[i];
			
		}
		
		
		max2=count2[0];
		for(i=1;i<=start2;i++)
		{
			if(count2[i]>max2)
			max2=count2[i];
			
		}
		max=max1;
		if(max2>max1)
		max=max2;
		                                     // also try test case 1 2 3 4 5 
		if(max>0)
		printf("%d\n",max);
		else
		if(max<=0)
		printf("UNFIT\n");
	}
	
	
	}
	
}
