#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int T,i,j,temp,ascii[150];char exp[210];
	scanf("%d",&T);
	
	for(j=0;j<T;j++)
	{  int sum=0; int count=0;
		
		scanf("%s",exp);
		
		
		for(i=0;i<150;i++)
		  ascii[i]=0;
		  
		  for(i=0;exp[i]!='\0';i++)
		  {
		  	temp=(int)exp[i];
		  	ascii[temp]+=1;
		   //cout<<"\n temp =="<<temp;  	
		  	
		  }
		
		for(i=65;i<=122;i++)
		{
			if(ascii[i]>0)
			    {
			    	if(ascii[i]%2==0)
			    	count=ascii[i]/2;
			    	if(ascii[i]%2!=0)
			    	count=ascii[i]/2+1;
			    	
			     sum+=count;    	
			    }
			
		}
		
		printf("%d\n",sum);
	}
	
	
}
