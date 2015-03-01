#include<stdio.h>


int main()
{
	int T,n,m,i,j,temp,turn,array[1001],list1[1000],list2[1000],index1,index2;
	scanf("%d",&T);
	
	while(T--)
	{   turn=1;index1=0;index2=0;
		scanf("%d",&n);
		scanf("%d",&m);
		for(i=1;i<=n;i++)
		   array[i]=5;
		   
		for(i=1;i<=m;i++)
		{
			scanf("%d",&temp);
			array[temp]=0;
		}
		printf("\n the array is");
		for(i=1;i<=n;i++)
		   printf("%d\n",array[i]);
		
		for(i=1;i<=n;i++)
		{
			
			    
			
			if(array[i]!=0 &&turn%2==0)    
			{
				
				
					list2[index2]=i;
					index2++;turn++;
		    }
			if(array[i]!=0 && turn%2==1)
				{
					list1[index1]=i;
					index1++;turn++;
				}
			
			
			}	
			
	    
			if(index1==0)
			printf(" \n");
			if(index1>0)
			{
				for(j=0;j<index1;j++)
				   printf("%d\n",list1[j]);
			}
			printf("first list ends");
			if(index2==0)
			printf(" \n");
			if(index2>0)
			{
				for(j=0;j<index2;j++)
				   printf("%d\n",list2[j]);
			}
			
			
		
		
		
		
	}
	
	
	
	
	
}
