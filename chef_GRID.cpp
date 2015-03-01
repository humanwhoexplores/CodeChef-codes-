#include<stdio.h>


int matrix[1000][1000];

int main()
{    int T,N,i,j,temp,count;  char array[1001];
	scanf("%d",&T);
	while(T--)
	{   scanf("%d",&N);
	     count=0;
	    for(i=0;i<N;i++)
	       {
	       	for(j=0;j<N;j++)
	       	  { matrix[i][j]=0;}
	       }
		
		for(i=0;i<N;i++)
		{
		 scanf("%s",array);
		  for(j=0;j<N;j++)
		  {
		  	if(array[j]=='#')
		  	  matrix[i][j]=1;
		  }
		
	    }
		
		for(i=N-1;i>=0;i--)
		{   temp=i;
			for(j=N-1;j>=0;j--)
			{
				if(matrix[i][j]==0)
				   count+=1;
			     if(matrix[i][j]==1)
				    {
				        while(temp>=0)
						{
							matrix[temp][j]=1;
							temp--;
						}	
				       break;
					}  
			}
		}
		
		printf("%d\n",count);
		
	}
	
	return 0;
}
