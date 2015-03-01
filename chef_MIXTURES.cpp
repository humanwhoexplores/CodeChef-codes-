#include<stdio.h>

int main()
{
	int n,i,j,k,len,b[100][100],c[100][100];
	while(scanf("%d",&n)!=EOF)
	{
		   
		for(i=0;i<n;i++)
		    for(j=0;j<n;j++)
			   {
			   	b[i][j]=1000000000;
			   	c[i][j]=0;
			   }   
		
		for(i=0;i<n;i++)
		    {
		    	scanf("%d",&c[i][i]);
		    	b[i][i]=0;
		    }
		    
		    
	
	  for(len=1;len<n;len++)
      {
        for(i=0;i<(n-len);i++)
        {
            j=i+len;
            for(k=i;k<(i+len);k++)
            {
                
                if(b[i][j]>(b[i][k]+b[k+1][j]+c[i][k]*c[k+1][j]))
                   {
                       b[i][j]=b[i][k]+b[k+1][j]+c[i][k]*c[k+1][j];
                       c[i][j]=(c[i][k]+c[k+1][j])%100;
                   }
            }
        }
      }    
		    
		printf("%d\n",b[0][n-1]);
		
	}
	
	
	
	return 0;
	
}
