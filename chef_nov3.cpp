#include<iostream>
using namespace std;

long long hob (long long num)
{    /* this returns largest number which is power of 2 <=num*/
    if (!num)
    	return 0;

    long long ret = 1;

    while (num >>= 1)
    	ret <<= 1;

    return ret;

}



int main()
{
	
	long long T,L,K,pivot,ans;
	cin>>T;
	while(T--)
	{
		cin>>L>>K;
		
		pivot=hob(K+1);
		cout<<"\n pivot=="<<pivot;
		if(pivot==K+1)
		{
			ans=L-(L/pivot);
			
			
		}
		if(pivot<(K+1))
		{
			ans=((L/(2*pivot))*(2*((K+1)-pivot) -1);
		
			
			
			
		}
		
		cout<<ans<<"\n";
		
	}
	
	
}
