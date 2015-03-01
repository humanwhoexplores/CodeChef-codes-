#include<iostream>
#include<stdio.h>

using namespace std;

int count[50050];
int main()
{
	int list1[500050],i,j,list2[50050],list3[50050],list4[50050],list5[50050],N1,N2,N3,temp,min,start1=1,start2=1;
	scanf("%d",&N1);
	scanf("%d",&N2);
	scanf("%d",&N3);
	
	for(i=1;i<=N1;i++)
	    scanf("%d",&list1[i]);
	    
		
	for(i=1;i<=N2;i++)
	    scanf("%d",&list2[i]);
		
	for(i=1;i<=N3;i++)
	    scanf("%d",&list3[i]);
	
		   if(N1<=N2)
		   min=N1;
		   else
		   min=N2;
		   
		   for(i=0;i<N1;i++)
		   {
		   	    
		   	  	while(list2[j]<=list1[i])
		   	  	{    j=0;
		   	  		if(list1[i]==list2[j])
		   	  		{
		   	  			list4[start1]=list1[i];
		   	  			start1++;
					}
		   	  	   else
		   	  	   if(list2[j]!=list1[i])
		   	  	   {
		   	  	   	list5[start2]=list2[]
		   	  	   }
		   	   }
		   }
	
	
	
	
}
