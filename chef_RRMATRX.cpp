#include<stdio.h>

long long  MOD = 10000007;



int main()
{
	int n,m,i,j;   ///  n rows  m columns
	scanf("%d%d",&n,&m);
	int matrix[200][200];
	long long ans=1,sum=0; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		 scanf("%d",&matrix[i][j]);
		
	}
	for(j=0;j<m;j++)
	{   sum=0;
		for(i=0;i<n;i++)
		 {
		 	sum=sum+matrix[i][j];
		 }
		ans=ans*sum;
		ans%=MOD;
	}
	 if(ans<0)
	 ans+=MOD;
	 
	 
	printf("%lld\n",ans);
	
	return 0;
}
