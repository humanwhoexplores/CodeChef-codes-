#include<iostream>
using namespace std;




int main()
{
	int T,N,i,sum,flag[10002],calc;
	cin>>T;
	while(T--)   
	{   sum=0;  calc=1;
		cin>>N;  
		int prob[N],flag[N];
		for(i=0;i<N;i++)
		   cin>>flag[i];
		for(i=0;i<N;i++)
		   cin>>prob[i];
		
			
		for(i=0;i<N;i++)
		   sum=sum+flag[i];
		
		for(i=0;i<sum-sum/2;i++)
		  find[i]=0;
		  
		for(i=0; i<n; i++)
		{
			for(j=sum-sum/2; j>0; j--)
			{
				if(j-flag[i] <= 0)
					calc=1;
				else
					calc=find[j-flag[i]];
				find[j]=(1-(double)prob[i]/100)*find[j] + ((double)prob[i]/100)*calc;
			}
		}  
			
			
		
		printf("%.7f\n",find[sum-sum/2]);
		
		   
		   
		   
		
		
		
		
		
	} 
	
	
	
	return 0;
}
