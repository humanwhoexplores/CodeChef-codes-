#include<algorithm>
#include<stdio.h>

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




long long calc()
{
	long long count= x/m;
	long long temp=x%m;
	
	
	
}


int main()
{
	long long n,m,i;
	scanf("%lld%lld",&n,&m);
	long long array[n],fact[n];
	
	for(i=0;i<n;i++)
	   scanf("%lld",&array[i]);
	   
	   sort(array,array+n);
	   
	   
	   
	
	
	return 0;
}
