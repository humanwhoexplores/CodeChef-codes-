#include<iostream>
#include<stdio.h>

using namespace std;

int find_d(int[],int,int);

int main()
{
	int N,K,i,array[100000],diff[100000],problem[20],temp1,temp2,temp3,counter=0,curr_ele,difference,x=0;
	scanf("%d",&N);scanf("%d",&K);
	for(i=0;i<N;i++)
	     scanf("%d",&array[i]);
	     
	               //  design this for       N   >   15 
	for(i=0;i<N-1;i++)
	     diff[i]=array[i+1]-array[i];
	
	difference=find_d(diff,N-1,K);  ///    it finds the common difference which repeats the max time;
	
	// find the place where it needs to be replaced the following term must be part of the required ap;
	
	
	for(i=0;i<N-2;i++)
	{   // it does not take care of first and last elements
		//if((array[i+1]-array[i]==difference) && (array[i+2]-array[i+1]==difference))
		  //array[i-1]=array[i]-difference;
		 if(diff[i]!=difference && diff[i]==difference)
		 {
		 	array[i]=array[i+1]-difference;
		 	
		 	
		 	
		 }   
		    
		
		
		
	}
	
	for(i=0;i<N;i++)
	  printf("%d ",array[i]);
	     
	
}

int find_d(int diff[],int size,int K)
{
	int i,j,temp1,temp2,temp3,counter=0,curr_ele;
	
	for(i=0;i<size;i++)
	{
		curr_ele=diff[i];counter=0;
		for(j=0;j<size;j++)
               {
               	   if( curr_ele==diff[j]  )
               	         counter++;
               	         
               	         if(counter>=20 ||counter>=size-K)
               	             return curr_ele;
               	             
                     
               	
               }		
		
		
	}
	if(counter==1)
	  return -1;
	
	
	
	
}
