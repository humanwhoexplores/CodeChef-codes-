#include<stdio.h>

# define MOD 1000000007;




int main()
{
	long long int N,i,j,k,temp;
	scanf("%lld",&N);
	long long int array[N],matrix[N+1][N+1];
	
	for(i=0;i<N;i++)
	  scanf("%lld",&array[i]);
	  
	for(i=0;i<N;i++)
        for(j=0;j<N;i++)
		   matrix[i][j]=0;
	
	for(i=0;i<N-1;i++)
	{    
	    
	     
		for(j=i+1;j<N;j++)
		{   
		     if(array[j]<0)
		     continue;
		     
		     
		     for(k=i;k<j;k++)
		     {
		     	
		     	if(array[k]!=-array[j])
		     	   continue;
		     	if(array[k]==-array[j])
		     	{
		     		
		     		matrix[i][j]=matrix[i][j-1]+(1+matrix[k+1][j-1])*(1+matrix[i][k-1]);
		     		matrix[i][j]%=MOD;
		     	}
				    
		     	   
		     }
			
			
			
		}
		
		
		
	}
	  
	printf("%lld\n",matrix[0][N-1]);
	
	return 0;
}
