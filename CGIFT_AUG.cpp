#include<stdio.h>
#include<iostream>
using namespace std;

int check(int[],int,int);
int main()
{
	int *array,*what,size,i,n,k;
	cout<<"\n enter size";
	scanf("%d",&size);
	what =new int[size];               //  size is the number of test cases
	
	for(i=0;i<size;i++)
	{    
	cout<<"\n enter n and k";
		cin>>n>>k;
	    array=new int[n];
	    cout<<"\n enter array";
		for(i=0;i<n;i++)
		cin>>array[i];
		
		what[i]=check(array,n,k);
		   
	}
	for(i=0;i<size;i++)
	{
		if(array[i]==1)
		cout<<"YES\n";
		
	}
}

int check (int array[],int n,int k)
{
   int i,f,count=0;
	/*for(i=0;i<n;i++)
	{
		if(array[i]%2!=0) used to find if all numbers are odd
		count+=1;
	}
	if(count<k)
	return 0;
	*/
	for(i=0;i<n;i++)
	{   
		if(array[i]%2==0)
		{
			for(f=i;f<i+k;f++)
			{
				if(array[f]%2==0)
				{				
				count+=1;
				}
			    
			     
			}
						
			
		}
		if(count==k)
		return 1;
		else
		count=0;
		
		
	}
	return 0;
	
}
