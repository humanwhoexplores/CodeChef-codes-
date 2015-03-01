#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int T,i,hash[26],temp,len,count;  char array[100001];
	scanf("%d",&T);
	while(T--)
	{   count=0;
		gets(array);
		len=strlen(array);
		
		for(i=0;i<26;i++)
		 {
		 	hash[i]=0;
		 }
		
		for(i=0;i<len;i++)
		  {
		  	temp=array[i]-97;
		  	hash[temp]++;
		  	
		  	
		  	
		  }
		   	
		  for(i=0;i<26;i++)
		   {
		   	if(hash[i]>0)
		   	 {
		   	 	count++;
		   	 }
		   } 	
		   	
		   
		
		printf("%d\n",count);
		
	}
	
	
	return 0;
}
