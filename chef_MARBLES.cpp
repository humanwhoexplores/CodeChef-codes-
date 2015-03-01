#include<stdio.h>
 
long long ncr(int n, int r)
{
    if (r==0) return 1;
    else return ncr(n-1,r-1) * n / r;
}

long long min(long long a long long b)
{
	if(a<=b)
	  return a;
	  return b;
	  
}
 
int main()
{
    long long t,n,k,ans;
    scanf("%lld",&t);
    while(t--)
    {
       ans=1;
    	scanf("%lld%lld",&n,&k);
    	
    	ans=ncr(n-1,min(k-1,n-k));
    	printf("%lld\n",ans);
    	
    	
    	
    	
    	
    }
    
    return 0;


}

