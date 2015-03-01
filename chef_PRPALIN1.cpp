#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int prime (int);


int main()
{
	int N,num,alpha,i,j,h,status,array[10];
	cin>>N;
	while(1)
	{
	link1:
	status =prime( N);
     
     if(status==0)
	 {
	 N++;continue;
	 	
	 
    }
    else
    if(status==1)
    {
    	num=N;alpha=1;
    	while(num>0)
    	{
    		array[alpha]=num%10;
    		num=num%10;
    		alpha++;
    		
    		
    	}
       int beg=1,end=alpha;
    	while(beg<=end)
    	{
    		if(array[beg]!=array[end])
    		  goto link1;
    		  
    		  else
    		  {
    		  	beg++;
    		  	end--;
    		  }
             		
    	}
    	printf("%d",N);
    

     }
	
}

}
int prime (int n)
{
	if(n==1)
	return 0;
	if(n==2||n==3||n==5||n==7||n==11||n==13||n==19)
	return 1;
	
	for(int h=3;h<sqrt(n);h+=2)
	{
		if(n%h==0)
		return 0;
	}
	return 1;
	
	
	
	
}
