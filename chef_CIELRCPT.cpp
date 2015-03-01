#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
using namespace std;



//int bsearch(int[],int,int );


int main()
{   

int array[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int T,num,i,j,temp,counter=0;
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{    counter=0;
		scanf("%d",&num);
		
		while(num>0)
		{   
			for(i=0;i<11,num>0;i++)
			{  
			 if(array[i]<=num&&array[i]>num )
			{
			
			}	
		    }
			
		}
		
		
		
		printf("%d",counter);
		
	}
	
}

/*int bsearch(int ar[],int N,int num)
{
	int beg,end,mid;
	beg=0;end=N-1;
	while(beg<=end)
	{
	
	mid=(beg+end)/2;
	
	if(num==ar[mid])
	return ar[mid];
	if(num>ar[mid])
	{
		beg=mid+1;
		
	}
	else end=mid-1;
	 
    }
    for(int i=beg;i<end;i++)
    {
    	if(ar[i]<=num&&ar[i+1]>=num)
    	return ar[i];
    }
}*/
