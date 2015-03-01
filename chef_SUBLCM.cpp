#include<stdio.h>

#define gc getchar

inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}


int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}


int main()
{
	int t,i,j,N,ans,max;
	 t=scan();
	while(t--)
	{   ans=0;max=0;
		N=scan();
		int array[N];
		for(i=0;i<N;i++)
		   array[i]=scan();
		
		for(j=0;j<N-1;)
		{
	        for(i=j+1;i<N;i++)
	        {
	            if(gcd(array[i],array[j])==1)
				{
				      ans++;
				      
				      if(max<ans)
				        max=ans;
				if(i==N-1)
				  j=i;
				}	
				
				else
				{
					ans=0;
					j++;
					break;
				}
	        
			
			}
			
			
			
		}
		   
           		    
		   printf("%d\n",max);
		
	}
	
	
	return 0;
}
