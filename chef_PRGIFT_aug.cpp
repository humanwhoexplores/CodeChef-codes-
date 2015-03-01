#include<stdio.h>

using namespace std;

int check(int[],int,int);

int main()
{
	int *array,*what,size,i,y,n,k;
	//cout<<"\n enter number of test cases";
	scanf("%d",&size);
	what =new int[size];               //  size is the number of test cases
	
	for(i=0;i<size;i++)
	{    
	//cout<<"\n enter n and k";
		scanf("%d",&n);scanf("%d",&k);
	    array=new int[n];
	    //cout<<"\n enter array";
		for(y=0;y<n;y++)
		{
		scanf("%d",&array[y]);
	    }
		
		what[i]=check(array,n,k);
		
		delete[] array;
		
	}
	for(i=0;i<size;i++)
	{
		if(what[i]==1)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
}

int check (int array[],int n,int k)
{
   int i,f,count=0;
		
	if(k!=0)
	{
		for(i=0;i<n;i++)
	{
		if(array[i]%2==0) 
		count+=1;
	}
	if(count>=k)
	return 1;
	else 
	return 0;
    }
    if(k==0)
    {
    	for(i=0;i<n;i++)
    	{
    		if(array[i]%2!=0)
    		return 1;
    	}
    	return 0;
    }
    
	/*for(i=0;i<n;i++)
	{  
		count=0;
		if(array[i]%2==0)
		{
			for(f=i;f<i+k;f++)
			{
				if(array[f]%2==0)
				{count+=1;}
							
			   
			}
			if(count==k)
			return 1;		
						
		}
				
	
	}	
	return 0;

*/
}
