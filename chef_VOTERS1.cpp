#include<stdio.h>
#include<iostream>

using namespace std;

int count[10000000];

int main()
{
	int T,N1,N2,N3,i,j,smaller;
	
	
	
		
		int array1[50000],array2[50000],array3[50000],index=0;
		for(i=0;i<N1;i++)
		  {
		  scanf("%d",&array1[i]);count[array1[i]]++;
	       }
		for(i=0;i<N2;i++)
		  {
		   scanf("%d",&array2[i]);count[array2[i]]++;  
	        }
		for(i=0;i<N3;i++)
		    {
		    scanf("%d",&array3[i]);count[array3[i]]++;
		     }
		     
		     for(i=1;i<=10000000;i++)
		     {
		     	if(count[i]>0)
		     	printf("%d\n",i);
		     }
		    /*smaller=N1;
		    if(N2<N1)
		      smaller=N2;
		      
		    for(i=0;i<smaller;i++)
			{   int f=0;
				while(array2[f]<=array1[i])
				{
					if(array1[i]==array2[f])
					   {
					   	
					   	ans[index]=array1[i];
					   	index++;
					   	
					   	array2[f]==0;
                        break;  
					   }
					   
					
					f++;
				}  
			}*/
			
			
			  
		
		
		
	
}
