#include<stdio.h>
#include<iostream>
using namespace std;





int main()
{
	int T,i,j,count,temp,sum=0; char exp[210];
	scanf("%d",&T);
	
	while(T--)
 	{    sum=0;
		gets(exp);
          //memset(ascii,0,150);		
	    int ascii[150];	
		for(i=60;i<130;i++)
		{
			ascii[i]=0;
		}
		for(i=0;exp[i]!='\0';i++)
		{
			temp=(int)exp[i];
			//cout<<"\n temp is    "<<temp;
			ascii[temp]++;
			
		}
		//count=0;
		
		for(i=65;i<=122;i++)
		{
			if(ascii[i]>0)
			{
				if(ascii[i]%2==0)
				{
					count=ascii[i]/2;
				}
				else
				if(ascii[i]%2!=0)
				{
					count=ascii[i]/2+1;
				}
			}
			sum+=count;
			//printf("count is=%d\n",count);
		}
		printf("%d\n",sum);
	}
	

}
