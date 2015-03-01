#include<iostream>
//#include<math.h>


using namespace std;

unsigned long long power(int);

int main()
{
	int N,vacant,places;unsigned long long ans;
     cin>>N;

	
	
	if(N<13)
	ans=0;
	
	if(N==13 || N==14)
	 ans=1;
	
	if(N>14)
	{
		vacant=N-14;
		if(vacant%2==0)
		{   //cout<<"\n vacant=="<<vacant;
			places=vacant/2;
			//cout<<"\n places=="<<places;
			ans=power(places);
			//cout<<"\n ans=="<<ans<<"\n";
		}    
		if(vacant%2!=0)
		{   //cout<<"\n vacant=="<<vacant;
			places=vacant/2+1;
			//cout<<"\n places=="<<places;
			ans=power(places);
			//cout<<"\n ans=="<<ans<<"\n";
		}
			
		
	}
	
	//ans=ans%1000000007;
	cout<<ans<<"\n";
	// cin>>N;
    
}

unsigned long long power(int n)
{    unsigned long long ans=1;
	for(int i=1;i<=n;i++)
	 {
	 	ans=ans*7;
	 	ans=ans%1000000007;
	 	
	 }   
	return ans;
}
