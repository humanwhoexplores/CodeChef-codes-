#include<iostream>
#include<stdio.h>
#include<process.h>
using namespace std;

int main()
{
	int n1,n2,n3,x,y,z,array1[50001],array2[50001],array3[50001],temp,list[50001],count=0,m=0,n;
	//scanf("%d,%d,%d",&n1,&n2,&n3);
	cin>>n1>>n2>>n3;
	/*array1=new int[n1];
	array2=new int[n2];
	array3=new int[n3];
	int max;   // to determine maximum size of list
	if(n1>=n2&&n1>=n3)
	max=n1;
	if(n2>=n3&&n2>=n1)
	max=n2;
	else
	max=n3;*/
	
	
	
	for(x=0;x<n1;x++)
	{
		scanf("%d",&array1[x]);
		
	}
	for(y=0;y<n2;y++)
	{
		scanf("%d",&array2[y]);
	}
	for(z=0;z<n3;z++)
	{
		scanf("%d",&array3[z]);
	}
    
    for(x=0;x<n1;x++)
    {   count=0;
    	temp=array1[x];
    	
		for(y=0;y<n2;y++)
    	{
    		if(array2[y]==temp)
    		{
    			count++;
    			
    		}
    	}
    	for(z=0;z<n3;z++)
    	{
    		if(array3[z]==temp)
    		{
    			count++;
    		}
    		
    	}
    	if(count>1)
    	{
    		list[m]=array1[x];
    		m++;
    	}
		
    }
    cout<<m<<"\n";
    for(n=0;n<m;n++)
    {
    	cout<<list[n]<<"\n";
    }
    
}
