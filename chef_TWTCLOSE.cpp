#include<stdio.h>
#include<string.h>

int main()
{
	int N,K,array[1001],i,len,num,count,hash;
	char input[15];
	  
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++)
	    array[i]=0;
	
	while(K--)
	{   
	
		num=0;  count=0;
		scanf("%s",input);
		len=strlen(input);
		if(input[2]=='O')
		{
			count=0;
			for(i=0;i<N;i++)
			  array[i]=0;
		  	   
		}
		
		else if(input[2]=='I')
		{  
			 scanf("%d",&hash);
			/*for(i=6;i<len;i++)
			  {   num*=10;
			      num+=input[i]-'0';
				  	
			  }
			  num-=1;*/
			  if(array[hash-1]==1)
			    array[hash-1]=0;
			  else 
			  if(array[hash-1]==0)
			     array[hash-1]=1;  
		
		for(i=0;i<N;i++)
		  {
		  	if(array[i]==1)
		  	   count++;
		  }
		  
		  }
		  
		
		printf("%d\n",count);
	}
	
	
	
	return 0;
}

