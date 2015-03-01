#include<stdio.h>
#include<math.h>
#define mod 1000000007

int find(int n)
{
	int i,temp;
	temp=n;
	if(temp%2==0)
	   return 0;
    else 
	for(i=2;i<=sqrt(n);i++)
	{
		if(temp%i==0)
		  return 0;
		
		
	}	   
	return n;
}

long long power(long long a, long long b)
{
long long x =1, y = a;
	while(b > 0)
	{
		if(b%2 == 1)
		{
			x=(x*y);
			if(x>mod) x%=mod;
		}
		y = (y*y);
		if(y>mod) y%=mod;
		b /= 2;
	}
	return x;
}
int main()
{
	int T,N,i,j,f,prime[25],temp; long long sum;
	int array[100000];
	scanf("%d",&N);
	for(f=2,i=0;f<101;f++)
	  {
	  	temp=find(f);
	  	if(f>0)
	  	 {
	  	 array[i]=temp;i++;
	      }
	  }   
	for(i=0;i<N;i++)
	    scanf("%d",&array[i]);
	
	scanf("%d",&T);
	while(T--)
	{   sum=1;
	    int Li,Ri,Mi;
		scanf("%d",&Li); scanf("%d",&Ri); scanf("%d",&Mi);
		/*for(j=Li-1;j<Ri;j++)
		   {
		   	sum=sum*array[j];
		   	if(sum>mod)
		   	 sum=sum%Mi;
		   	 
		    this code gives   TLE 	 
		   }
			sum%=Mi;
		printf("%lld\n",sum);
		*/
		
		
	}
	
	
	
}
