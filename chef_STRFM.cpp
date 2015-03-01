#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

long long fact;



long long calc(long long current,long long m,long long ans,long long previous)
{
	
	long long i,temp=1;
	 
	 
	
	for(i=previous+1;i<=current;i++)
	{
	    fact=fact*i;
	    temp=fact*i;
	    temp=temp%m;
	    ans+=temp;
	    ans=ans%m;
		
	}
	
	temp=current;
	temp=temp*current;
	temp=temp%m;
	temp=temp*(current+1)/2;
	temp=temp%m;
	//temp=temp/2;
	ans+=temp;
    	
	return ans;
	
}

long long special(long long current,long long m)
{
	long long i,temp=1,ans=0;fact=1;
	
	for(i=1;i<=current;i++)
	 {
	        fact=fact*i;
	 	     temp=fact*i;
	 	     temp=temp%m; 
	 	     ans+=temp;
	 	     ans=ans%m;
	 }
	
	
	temp=current;
	temp=temp*current;
	temp=temp%m;
	temp=temp*(current+1)/2;
	temp=temp%m;
	
	ans+=temp;
    
	
	
	
	return ans;
	
}

int main()
{
	long long n,m,i;
	scanf("%lld%lld",&n,&m);
    
	long long array[n],ans=0; 
	for(i=0;i<n;i++)
	  scanf("%lld",&array[i]);
	  
	  sort(array,array+n);
	  
	  for(i=0;i<n;i++)
	  {
	  	
	  	if(array[i]>=m)
	  	   break;
	  	
	  	if(i==0)
	  	 {
	  	 	ans=ans+special(array[0],m);
	  	 	continue;
	  	 }
	  	   
	  	   if(array[i]==array[i-1]);
			  continue; 
	  	
	  	 
	  	  ans=ans+calc(array[i],m,ans,array[i-1]);
	  	
	  	
	  }
	  
	  
	printf("%lld\n",ans);
	
	return 0;
	
}
