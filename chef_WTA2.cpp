#include<iostream>
using namespace std;

int main()
{
	long long int temp1,temp2,ans,i,T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		temp1=N+1;
		//temp2=temp1/2;
		//ans=N+temp2;
		temp1*=N;
		temp1/=2;
		
		ans=temp1+N;
		/*for(i=1;i<=N;i++)
		  {
		  	ans+=i;
		  }
		  
		*/
		cout<<ans<<"\n";
		
	}
	//cout<<((100000)*(100000+1))/2;
	
	
}
