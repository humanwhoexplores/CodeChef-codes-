#include<stdio.h>
 
int main()
{
	int T,x,y,count,i,j,n,ans,len1,len2,tempx,tempy,array1[35],array2[35];
	scanf("%d",&T);
	while(T--)
	{   i=0;j=0; count=0;
		scanf("%d%d",&x,&y);
		tempx=x;
		tempy=y;
		n=1;
		while(tempx>0)
		{
			if(tempx & n)
			{
				array1[i]=1;
			}
			else
			array1[i]=0;
			
			i++;
			tempx=tempx>>1;
			
		}
		
		n=1;
		while(tempy>0)
		{
			if(tempy & n)
			{
				array2[j]=1;
			}
			else
			array2[j]=0;
			
			j++;
		    tempy=tempy>>1;
			
		}
		len1=i;
		len2=j;
		
		for(i=len1-1,j=len2-1;i>=0 && j>=0;i--,j--)
		   {
		   	  if(array1[i]!=array2[j])
		   	      break;
		   	      
		   	    else
				   
				  count++;   
		   	  
		   	  
		   	  
		   }
		
		
		ans=len1+len2-2*count;
		printf("%d\n",ans);
		
	}
	
	
	
	return 0;
}  
