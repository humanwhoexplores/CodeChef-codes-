#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int K,N,i,len,len2,flag;char array[51][51],string[51],*ptr;
	scanf("%d%d",&K,&N);
	
	for(i=0;i<K;i++)
	  scanf("%s",array[i]);
	  	
	  while(N--)
	  {  flag=-10;
	  	ptr=NULL;
	  	scanf("%s",string);
	  	len=strlen(string);
	  	
	  	if(len>=47)
	  	  printf("Good\n");
	  	  
	  	else if(len<47)
		  {
		  	for(i=0;i<K;i++)
		  	{   ptr=NULL;
		  	   len2=strlen(array[i]);
		  	   ptr=search(string,string+len,array[i],array[i]+len2);
		  	   
		  	   if( ptr==string+len)
				  {   
				    continue;
				   }
				 	  	   
		  	   else
		  	   {
		  	   printf("Good\n")
               break;
			   }
		     }
		     if(flag==-10)
		       printf("Bad\n");
		  }  
	  	
	  }	
	  
	
	
	return 0;
}
