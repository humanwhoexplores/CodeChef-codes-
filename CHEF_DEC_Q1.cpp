#include<stdio.h>
#include<stdlib.h>



#define gc getchar

inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

int hash[100001];

int main()
{
	int T,N,temp,count,i;
	T=scan();
	while(T--)
	{
		count=0;
		N=scan();
		
		for(i=1;i<=100000;i++)
		  hash[i]=0;
		for(i=0;i<N;i++)
		{
		temp=scan();
		hash[temp]++;
	    }
		for(i=1;i<=100000;i++)
		{
			if(hash[i]>0)
			count++;
		}
		
		printf("%d\n",count);
	}
	
	
	
	
}
