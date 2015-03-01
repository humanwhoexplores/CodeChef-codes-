#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;




                       
 /*int graph[10][10]=
 {
    {0,1,0,0,1,1,0,0,0,0},
    {1,0,1,0,0,0,1,0,0,0},
    {0,1,0,1,0,0,0,1,0,0},
    {0,0,1,0,1,0,0,0,1,0},
    {1,0,0,1,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,1,1,0},
    {0,1,0,0,0,0,0,0,1,1},
    {0,0,1,0,0,1,0,0,0,1},
    {0,0,0,1,0,1,1,0,0,0},
    {0,0,0,0,1,0,1,1,0,0}

};
*/
//  this is the adjacency matrix for the graph


 int graph[10][10]=
 {
    {-65,66,0,0,69,65,0,0,0,0},
    {65,-66,67,0,0,0,66,0,0,0},
    {0,66,-67,68,0,0,0,67,0,0},
    {0,0,67,-68,69,0,0,0,68,0},
    {65,0,0,68,-69,0,0,0,0,69},
    {65,0,0,0,0,-65,0,67,68,0},
    {0,66,0,0,0,0,-66,0,68,69},
    {0,0,67,0,0,65,0,-67,0,69},
    {0,0,0,68,0,65,66,0,-68,0},
    {0,0,0,0,69,0,66,67,0,-69}

};





int main()
{
	
	int T,len,temp,i,j,k,pivot,p1,p2,flag,vec[100000],l,move;
	char array[100001];
	scanf("%d",&T);
	while(T--)
	{     flag=10;l=0;
	    scanf("%s",array); 
		len=strlen(array);
		
		
		temp=array[0];   //   the first element of the string
		for(j=0;j<10;j++;)
		{  
		    
		      
		    
			if(graph[j][j]==-temp)
			{   
			   p1=j;
			   p2=p1+5;    
			
				move=0;
			}
			
		}
		
		
         for(i=1;i<len && flag==10;i++)
		 {   
		       if(array[i]==array[i-1])
		          continue;
		 	
		 	temp=array[i];
		 	for(j=0;j<10;j++)
		 	{
		 		if(graph[p1][j]==temp)
		 		{
		 			//  element in row need to shift the pivot
		 			for(k=0;k<10;k++)
		 			{
	 	 				  move=-1;
		 				if(graph[k][k]==-temp)
		 				{
		 					p1=k;
		 					p2=k;
		 					move=0;
		 					break;
		 				}
		 				
		 			}
		 			break;
		 		}
		 		
		 		if(graph[p2][j]==temp && move!=-1)
		 		{
		 				 			//  element in row need to shift the pivot
		 			for(k=0;k<10;k++)
		 			{
		 				
		 				if(graph[k][k]==-temp)
		 				{
		 					p1=k;
		 					p2=k;
		 					move=0;
		 					break;
		 				}
		 				
		 			}
		 			break;
	
		 			
		 			
		 		}
		 		
		 	   	/*else
		 	   	{
		 	   		flag=-10;
		 	   }
		 	  	*/
		 		
				  	
				  	
				  	
				  	
				   
		 	}
		 	
		 	
		 	
		 }  		
		
		if(flag==-10)
		printf("-1\n");
		if(flag==10)
		{
			for(k=0;k<len;k++)
			 printf("%d",vec[k]);
			 printf("\n");
			
		}
		
		
		
	}
	
	
	
	
}

