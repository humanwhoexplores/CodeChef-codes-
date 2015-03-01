#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int ans[150000];



int main()
{
	int list1[50000],list2[50000],list3[50000],N1,N2,N3,i,j,index=0;
	scanf("%d%d%d",&N1,&N2,&N3);
	
	for(i=0;i<N1;i++)
	    scanf("%d",&list1[i]);
    for(i=0;i<N2;i++)
	    scanf("%d",&list2[i]);
	for(i=0;i<N3;i++)
	    scanf("%d",&list3[i]);
		
		j=0;
	for(i=0;i<N1;i++)	
	{
		// comparing list1 and list2
		while(j<N2 && list1[i]>=list2[j])
		{
			if(list1[i]==list2[j])
			{
				ans[index]=list1[i];
				index++;
				list1[i]=0;list2[j]=0;
				break;
			}
			
			else
			j++;
						
			
		}
		
	}	
		
	sort(list1,list1+N1);
	sort(list2,list2+N2);	
	j=0;
	for(i=0;i<N3;i++)
	{    
	       if(list3[i]>0)
	       {
	       
	     
		while(j<N2 && list3[i]>=list2[j])
		{
			if(list3[i]==list2[j])
			{
				ans[index]=list2[j];
				index++;
				list3[i]=0;list2[j]=0;
			}
			else
			j++;
			
			
			
	}
     }
	}
	sort(list2,list2+N2);
	sort(list3,list3+N3);
	   
	   for(i=0;i<N3;i++)
	{    
	       if(list3[i]>0)
	       {
	       
	     
		while(j<N1 && list3[i]>=list1[j])
		{
			if(list3[i]==list1[j])
			{
				ans[index]=list2[j];
				index++;
				list3[i]=0;list2[j]=0;
			}
			else
			j++;
			
			
			
		}
	   }
	   
	}
	
    
	
	sort(ans,ans+index);
	
	printf("%d\n",index);
	for(i=0;i<index;i++)
	   printf("%d\n",ans[i]);
	
}
