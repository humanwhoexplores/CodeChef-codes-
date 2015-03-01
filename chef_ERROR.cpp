#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	int T,flag; char array[100001];
	scanf("%d",&T);
	while(T--)
	{   flag=-1;
		gets(array); 
		int len=strlen(array);
		char pattern1={'1','0','1'},pattern2={'0','1','0'};
		char *ptr;
		 if(flag==-1)
		{
		ptr=search(array,array+len,pattern1,pattern1+3);
		if(ptr!=array+len)
		    flag=1;
	    }
		if(flag==-1)
		{
		ptr=search(array,array+len,pattern2,pattern2+3);
	     if(ptr!=array+len)
	       flag=1;
		}
	
		if (flag==1)
		 printf("Bad\n")
		 if(flag==-1)
		 printf("Good\n");
		
	}
	
	
}
