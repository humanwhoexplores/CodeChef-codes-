#include<stdio.h>
  //   THIS WAS MY FIRST SHOT TO THE MIXTUTES PROBLEM
   
   
     
#define gc getchar
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

# define maxint 1000000007

int main()
{
	
int N,i,j,array[101],dp[101][101],mod[101][101];
while(scanf("%d",&N)!=EOF)
{
	
	for(i=1;i<=N;i++)
	      array[i]=scan();
	 
	 
	 for(i=1;i<=N;i++)
	      mod[i][i]=array[i];
	      
     for(i=1;i<=N;i++)
	 {
	 	for(j=i+1;j<=N;j++)
	 	   {
	 	   	   mod[i][j]=(mod[i][j-1]+array[j])%100;
	 	   } 
	 	 
	 	
	 }
	 
	 
	 for(i=1;i<=N;i++)
	      dp[i][i]=0;
    
	int L,q,k;
	     	 
	for (L=2; L<N; L++)   
    {
        for (i=1; i<=N-L+1; i++)
        {
            j = i+L-1;
            dp[i][j] = maxint;
            for (k=i; k<=j-1; k++)
            {
                // q = cost/scalar multiplications
                q = dp[i][k] + dp[k+1][j] +mod[i][k]*mod[i][k] ;
                if (q < dp[i][j])
                    dp[i][j] = q;
                    
                    
            }
        }
    }
 
    printf("%d\n",dp[1][N-1]);

	
	
}

	return 0;
	
}
