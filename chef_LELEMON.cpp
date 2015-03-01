#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;


bool sortby(int A,int B)
{
	return A>B;
}
int main()
{
	
	int T,n,m,i,j,k,lamt,order[10000],bottle[100][100],condition[100];
	cin>>T;
	while(T--)
	{
		
		cin>>n>>m;
		for(i=0;i<m;i++)
		    cin>>order[i];
		    
		for(i=0;i<n;i++)
		{
		    cin>>amt;
			for(j=0;j<amt;j++)
			   cin>>bottle[i][j];
			   	
		    condition[i]=amt[i]	
			 sort(bottle[i],bottle[i]+amt,sortby);
		}    
		
		for(k=0;k<m;k++)
		{
			
			
			
			
		}
		
		
		
	}
	
	
	
}
