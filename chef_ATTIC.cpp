#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int T,i,count,steps,capacity; char c;
	scanf("%d",&T);
	while(T--)
     {
     	count=0;
     	getchar();
		 //gets(string);
     	//cin>>string;
     	//cout<<"\n the string is==\t"<<string<<"\n";
     	  
		 /*for(i=0;string[i]!='\0';)
     	{  cout<<"\n in loop\t"<<string[i];
     		steps=0;
     		
     		if(string[i]=='#')
     		 {
     		 	i++;continue;
     		 }
     		if(string[i]=='.')
     		{
     			while(string[i]=='.' && string[i]!='\0')
     			{
     				steps++;i++;
     				
     			}
     			if(steps>capacity)
     			{
     				count++;capacity=steps;
     			}
     		}
     		
     		
     		
     	}
     	
     	printf("%d\n",count);*/
     	
     	steps=0;
     	while((c=getchar())!='\n')
     	{
     		if(c=='.')
     		{
     			steps++;
     		}
     		
     		
     		
     	}
     	
     	
     }
	
}
