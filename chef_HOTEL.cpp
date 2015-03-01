#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int T,N,i,j,k,l,occupied,array1[100],array2[100],max;
	scanf("%d",&T);
	while(T--)
	{    occupied=0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		     scanf("%d",&array1[i]);
		   
		for(i=0;i<N;i++)
	         scanf("%d",&array2[i]);
		   
		sort(array1,array1+N);
		sort(array2,array2+N);
		//cout<<"\n";
		/*for(i=0;i<N;i++)
		   {
		   printf("array1=======%d",array1[i]);printf("\n");}
		for(i=0;i<N;i++)
		   {
		   printf("array 2 ===%d",&array2[i]);printf("\n");}
		*/
		i=0;j=0;
		while(i<N && j<N)
		{
			if(array1[i]<array2[j])
			    {
			     	occupied++; i++;
			     	if(max<occupied) max=occupied;
			    }
		    if(array1[i]==array2[j])
			  {
			  	i++;j++;
			  }		
			if(array1[i]>array2[j])
			    {
			    	occupied--;j++;
			    }
			//cout<<"\n value of max=="<<max<<"\n";
		}
		
		printf("%d\n",max);
		
	}
	
	
}
