#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int value,i,top,N,M,temp1,temp2,temp3,array[100000];char query;
	
			scanf("%d%d",&N,&M);
		for(i=0;i<N;i++)
		    {
		    scanf("%d",&array[i]);
		    }
		
		top=0;
		for(i=0;i<M;i++)
		{    cin>>query>>value;
		     
			//scanf("%c",&query);
			//scanf("%d",&value);
			
			//value=value%N;
			
			if(query=='C' )
			{   //cout<<"\n in query C";
			 if(((N-1)-top)<value)
			 {
			 	temp1=(N-1)-top;
			 	top=value-temp1-1;
			 	
			 	
			 }   	
			 	
			 else
			 {
			 	top=top+value;
			 }	
			 	
			 	
			}
			
			if(query=='A')
			{
				//cout<<"\n in query A";
				if(top<value)
				{
					temp2=value-top-1;
					top=N-1-temp2;
					
					
				}
				else
				{
					top=top-value;
					
				}
				
			}
			
			if(query=='R')
			{  //cout<<"\n in query R";
				
				
				value=value-1;
			     temp3=top;
				 
				 //printf("top=======%d\n",top);
				 
				 if(((N-1)-temp3)<value)
			     {
			 	temp1=(N-1)-temp3;
			 	temp3=value-temp1-1;
			 	
			 	
			     }   	
			 	
			    else
			    {
			 	temp3=temp3+value;
			 //	printf("value=====================    %d\n   temp3===========%d\n",value,temp3);
			    }	
		        
		        
		        
				 	
				printf("%d\n",array[temp3]);
				//printf("array[temp3]== %d\n  array[top]=%d\n array[0]=%d\n" ,array[temp3],array[top],array[0]);
				
			}
			
		}    
		
		
		
		
	
	
	
	
}
