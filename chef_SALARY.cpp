#include<stdio.h>
#include<malloc.h>
inline int read ()
{
	char c;
	int n = 0;
 
	while ((c = getchar_unlocked ()) < 48);
	n += (c - '0');
	
	while ((c = getchar_unlocked ()) >= 48)
	  n = n * 10 + (c - '0');
	
	return n;
}

int main()
{
	int T,N,i,*array,min; long long sum,ans;
 	T=read();
	while(T--)
	{   sum=0;
		N=read();
		array=(int *)malloc(sizeof(int)*N);
		for(i=0;i<N;i++)
		  {
		  array[i]=read();
		    sum+=array[i];
	      }
		
		min=array[0];
		
		for(i=0;i<N;i++)
		{
			if(array[i]<min)
                 min=array[i];
   
   		}
		
		
		ans=sum-N*min;
		printf("%lld\n",ans);
		
	}
	
	
	
	return 0;
}

