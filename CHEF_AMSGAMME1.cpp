#include<stdio.h>

int gcd (int a,int b)
{
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
	
	
}

inline int read ()
{
	char c;
	int n = 0;
 
	while ((c = getchar_unlocked ()) < 48);
	n += (c - '0');
	
	while ((c = getchar_unlocked ()) >= 48)  //  48 to 57 0---9
	  n = n * 10 + (c - '0');
	
	return n;
}

int main()
{
	int t,i,n,ans,temp,array[1000];
	
	t=read();
	while(t--)
	{
		
	  n=read();
	  for(i=0;i<n;i++)
	     array[i]=read();
		    ans=gcd(array[0],array[1])
		 for(i=2;i<n-1;i++)
		    {
		    	temp=gcd(array[i],array[i+1]);
		    	if(temp<ans)
		    	ans=temp;
		    }	
		
		printf("%d\n",ans);
		
	}
	
	
	return 0;
	
	
}
