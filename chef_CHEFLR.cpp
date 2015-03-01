#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	int T,i;
	char array[100000];unsigned long long sum;
	scanf("%d",&T);
	while(T--)
	{  sum=1;
	
		cin>>array;
		
	   for(i=0;array[i]!='\0';i++)
	   {
	   	  if(i%2==0)
	   	  {
	   	  
	   	  if(array[i]=='l')
	   	  {
	   	  	sum=sum*2;
	   	  	
	   	  }
	   	  if(array[i]=='r')
	   	      sum=sum*2+2;
	   	  }
	   	  
	   	  if(i%2!=0)
	   	  {
	   	  	if(array[i]=='l')
	   	  	   sum=sum*2-1;
	   	  	
	   	  	 if(array[i]=='r')
	   	  	    sum=sum*2+1;
	   	  	    
	   	  	
	   	  	
	   	  }
	   	sum=sum%1000000007;
	   }	
		
		//sum=sum%1000000007;
		cout<<sum<<"\n";
	}
	
	
	
	
}
