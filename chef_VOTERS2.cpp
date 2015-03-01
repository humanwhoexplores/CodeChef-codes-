#include<stdio.h>
#include<algorithm>

int main()
{
	int N1,N2,N3,*array1,*array2,*array3,i,j,smaller,index1=0,list[100000],flag,ans[100000],index2=0;
	scanf("%d%d%d",&N1,&N2,&N3);
	
	
	array1=new int[N1];
	array2=new int[N2];
	array3=new int[N3];
	
	for(i=0;i<N1;i++)
	  scanf("%d",&array1[i]);
	for(i=0;i<N2;i++)
	    scanf("%d",&array2[i]);  
	for(i=0;i<N3;i++)
	    scanf("%d",&array3[i]);
	    
	    //smaller=N1;flag=0;
	    //if(N2<N1)
	      
	      //smaller=N2;
	      
	      
	      
	/*for(i=0;i<smaller;i++)
	{   j=0;
		while(array1[i]<=array2[j])
		{
			if(array1[i]==array2[j])
			{
				ans[index_ans]=array1[i];
				index_ans++;
			     break;	
			}
			else
			if (array1[i]!=array2[j])
			{
				j++;
				continue;
			}
		}
		if(array1[i]>array2[j])
		
			
		
		
		
	} */ 
	  
	
	for(i=0;i<N1;i++)
	{
		
		for(j=0;j<N2;j++)
		{   while(array1[i]<=array2[j])
		   {
		   
			if(array1[i]==array2[j])
			{
			ans[index2]=array1[i];
			array2[j]=0;array1[i]=0;
			index2++;
			break;
		     }
		     else
		     if(array1[i]!=array2[j])
		     {
		     	list[index1]=array1[i]
		     	array1[i]=0;
		     	index1++;
		     	
		     }
		     
		    }
		    
		    while(array2[j]<array1[i])
		    {
		    	j++;
		    	list[index2]=array2[j];
		    }
		}
	}
	    
}
