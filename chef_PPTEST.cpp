#include<stdio.h>
#include<malloc.h>

int max(int a, int b)
{
	if(a>=b)
	return a;
	return b;
}

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
	int T,i,j,N,W,test,points[101],time[101],dp[101][101];
	T=scan();
	while(T--)
	{   
	    for(i=0;i<=100;i++)
	       for(j=0;j<=100;j++)
	           dp[i][j]=0;
	           
	           
	    
		N=scan(); W=scan();
		
		
		for(i=1;i<=N;i++)
		 {
		 	scanf("%d%d%d",&test,&points[i],&time[i]);
		 	points[i]*=test;
		 }
		
		for(i=1;i<=N;i++)
		   {  //   consider i=1 it loops for values of j
		      //  it checks feasibility for  values of j  from 0 to W
		      //  all entries are filled in dp[][] dp[i][j] may be= dp[i+1][j]
		     // dp[i][j] serves for dp[i+1][j] and so on  reqd ans dp[n][w]
		     // dp[n][w] is the result obtained by including/excluding all possible options at all intervals of time
		      
		   	  for(j=0;j<=W;j++)  
		   	    {
		   	    	if(j>=time[i])   //  this implies if we have sufficient time with us then we may consider including the element 
		   	    	  dp[i][j]=max(dp[i-1][j],dp[i-1][j-time[i]]+points[i]);   //  checks whether including the element or going with previous one-- which is better
		   	        else
					   dp[i][j]=dp[i-1][j];	//  if we do not have sufficient time then do not include it 
		   	    }
		   	
		   }
		 printf("%d\n",dp[N][W]);
		
		
	}	
	
	
	return 0;
}
