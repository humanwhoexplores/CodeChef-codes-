#include<stdio.h>
#include<string.h>


int main()
{
	int T,N,i,len;  char arr[1001];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s%d",arr,&N);
		while(N--)
		scanf("%d",&i);
        
		len=strlen(arr); 
         
         int j;
         
		for(i=0;i<len;i+=3)
		{
			if(i+3>=len)
			 j=len-1;
			else
			 j=i+3; 
			
		     while(j>=i)
		     {
		     	printf("%c",arr[j]);
		     	
		     	j--;
		     	
		     }
			
		}
		
		
		printf("\n");
		
		
	}
	
	
	return 0;
	
	
	
}

