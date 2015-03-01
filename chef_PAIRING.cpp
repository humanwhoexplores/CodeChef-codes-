#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;




int main()
{
	int T,n,m,i,j;
	scanf("%d",&T);
	
	while(T--)
	{    int ans[10000],lvalue[10000],rvalue[10000],count[1001],index=0;
		scanf("%d",&n);
		scanf("%d",&m);
		for(i=0;i<=1000;i++)
		    count[i]=0;
        for(i=0;i<m;i++)
		{
			scanf("%d",&lvalue[i]);
			count[lvalue[i]]++;
			scanf("%d",&rvalue[i]);
			count[rvalue[i]]++;
		}		
		 
		 
		ans[index]=m-1;index++;
		   //  the last pair is stored by default  check here for in between empty elements
		count[lvalue[m-1]]=0;
		count[rvalue[m-1]]=0;
		
		 for(i=m-1;i>=0;i--)
		 {
		 	if(count[lvalue[i]]>0 && count[rvalue[i]]>0)
		 	{
		 		ans[index]=i;
		 		index++;
		 		count[lvalue[i]]=0;
		 		count[rvalue[i]]=0;
		 		
		 		
		 		
		 		
		 	}
		 	
		 }
		 
		sort(ans,ans+index);
		for(j=0;j<index;j++)
		{
			printf("%d ",ans[j]);
		}
		
			
			
			
		
	}
	
	
}
