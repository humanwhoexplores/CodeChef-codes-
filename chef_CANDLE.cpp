#include<stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	
	int T,array[10],i,j,temp,ans,min,index,flag;
	scanf("%d",&T);
	link1:
	while(T--)
	 {   
	   temp=0;
		for(i=0;i<10;i++)
		    scanf("%d",&array[i]);
		
		min=array[0];index=0;
		for(i=0;i<10;i++)
		{
			if(array[i]<min)
			{
				index=i;
				min=array[i];
			}
								
		}    
	    //cout<<"\n index="<<index;
		//cout<<"\n min="<<min;	
		
		if(index!=0)
		{
		
		while(array[index]>=0)
		{   temp=temp*10;
			array[index]--;
			temp+=index;
			
					
		}
	    }
	    
	    
		if(index==0)
		{ temp=0;flag=5;
		    
		    i=1;
			while(i<10 && flag!=-1)
			{
				
				
				if(i==9 && array[9]==0)
				{   printf("0\n");
					//cout<<"answer =00\n";
					goto link1;
				}
				
				if(array[i]>0)
				{
					ans=i;flag=-1;
				}
				
				i++;
				
			}
			//cout<<"\n control is here";
	    	
		temp+=ans;
		temp=temp*10;
		
		}
		//cout<<"\n answer";
		printf("%d\n",temp);
		
		
	}
	
	
	
}
