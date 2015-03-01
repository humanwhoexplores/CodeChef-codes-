#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int T,N,A,B,i,count1,count10,count20,x,y,count2,numa,numb,ans,n1,n2,temp,sum;
	scanf("%d",&T);
	while(T--)
	{ count1=0;count2=0;numa=0;numb=0;
		scanf("%d%d%d",&N,&A,&B);
		
		for(i=0;i<N;i++)
	   {
	   	if((A&1<<i)>0)
	   	   count1++;
		}	      ///  number of set bits in number A
	   for(i=0;i<N;i++)
	   {
	   
	   	 if((B&1<<i)>0)  
	      count2++;    //  number of set bits in B
	   
	   }
	   count10=N-count1;count20=N-count2;
	   x=min(count1,count20);
	   y=min(count10,count2);
	   
	     sum=x+y;
		 for(i=0,n1=N-1;i<sum && n1>=0;i++,n1--)
		 {
		 	numa+=pow(2,n1);
		 } 
	     printf("%d\n",numa);
	   //printf("count1======== %d\n",count1);
	   //printf("count2==========%d\n",count2);
	  /* n1=0;n2=0;
	   if(count2>count1)
	   {
	   	temp=count2;
	   	count2=count1;
	   	count1=temp;
	   }
	  for(n1=0,i=N-1;n1<count1;n1++,i--)
	  {
	  	numa+=pow(2,i);
	  	
	  }	
	   //printf("numa==============%d\n",numa);	
	for(n2=0,i=0;n2<count2;n2++,i++)
	{
		numb+=pow(2,i);
		
	}	
	//printf("number b=============%d\n",numb);	
		
		//ans=numa^numb;
		
		printf("%d\n",ans);*/
	}
	
	
}
