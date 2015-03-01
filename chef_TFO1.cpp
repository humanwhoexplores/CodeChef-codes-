/*  this Qtiyapa writtten by wifisingh  aka datashark    */ 
/*   this is the SUBSET SUM PROBLEM USING DP  */
#include<stdio.h>

#define gc getchar

inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}


int main()
{
  int T,N,K;
  T=scan();
  while(T--)
  {
  	
  	N=scan();
  	K=scan();
  	int array[N],dp[K+1],i,j;
  	for(i=0;i<K+1;i++)
  	   dp[i]=0;
  	for(i=0;i<N;i++)
  	  array[i]=scan();
  	  
  	dp[0]=1;   ///     sum 0 can be obtained    
  	
  	for(i=0;i<N;i++)
    {
    	for(j=K-array[i];j>=0 && dp[K]==0;j--)
    	{
    		if(dp[j]==1)           //  if   sum j can be obained  then j+set[j] can also be obtained ...... just add this element 
    		dp[j +array[j]]=1;
    		
    	}
    	if(dp[K]==1)
    	 break;
    	
    }  	
  	
  	printf("%d\n",dp[K]);
  	
  }
	
	
	
	return 0;
}
