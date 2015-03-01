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
	int T,i,L,R,value;
    T=scan();
	while(T--)
	{
		int N,Q;
		N=scan(); Q=scan();
		
		int array[N+1];
		
		for(i=1;i<=N;i++)
		 array[i]=scan();
		 
		 while(Q--)
		 {
		 	
		 	L=scan(); R=scan();
		 	
		 	if(L>1)
		 	{
		 		i=1;
		 		value=array[1];
		 	}
		 	if(L==1)
		 	{
		 		i=R+1;
		 		value=array[i];
		 		
		 	}
		 	i+=1;
		 	while(i<=N)
		 	{  
		 	    
		 	     
		 	     if(i==L)
		 	     {
		 	       i=R+1;
		 	       if(i>N)
		 	       break;
		 	     }
				 value=gcd(value,array[i]); 
				    
		 	     i+=1;
		 	   
		 		
		 		
		 		
		 	}
		 	
		 	printf("%d\n",value);
		 }
		 
		
		
		
		
		
	}    
	
	
	
	return 0;
}
