#include<stdio.h>

#define ll long long

ll array[10000001];
 
 ll max(ll a,ll b)
 {
 	if(a>=b)
 	return a;
 	return b;
 	
 }
 
 /*int calc(int n)
 {
 	int sum=0;
 	  if(array[n]==0)
        {
        sum+=max(n,(calc(n/2)+calc(n/3)+calc(n/4)));
 	     return sum;
	    }
	  if(array[n]>0)
 	     return array[n];
 	

 }
 */
 
 ll answer(ll a)
 {   
     ll sum=0;
 	if(a<=10000000)
 	  return array[a];
 	 
	 
	 sum=answer(a/2)+answer(a/3)+answer(a/4);
	 return  sum;  
 	
 }
 
 int main()
 {
 	ll i,N;
 	
 	for(i=1;i<=12;i++)
 	    array[i]=i;
 	
	 
	 for(i=12;i<=10000000;i++)
	   array[i]=array[i/2]+array[i/3]+array[i/4];    
 	  	
 	    
 	while(scanf("%lld",&N)!=EOF)
 	    printf("%lld\n",answer(N));	
 		
 	
 	
 	return 0;
 	
 }
 
 
 
