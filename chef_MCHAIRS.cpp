#include<stdio.h>
# define ll  long long
# define MOD 1000000007
ll modular_pow(ll base, ll exponent, int modulus)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}



int main()
{
	
	ll T,N,ans;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&N);
		ans=modular_pow(2,N,MOD);
		printf("%lld\n",ans-1);
		
	}
	return 0;
}
