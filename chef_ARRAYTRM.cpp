#include<stdio.h>


#define gc getchar_unlocked

inline int fastint()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}






int main()
{
	int T,N,D,i,temp1,temp2,count1,count2;
	T=fastint();
	while(T--)
	{  count1=0;count2=0;
		N=fastint();
		D=fastint();
		
		int array[N];
		
		
		for(i=0;i<N;i++) array[i]=fastint();
           
            temp1=array[0];
			temp2=array[1];
			
			for(i=0;i<N;i++)
			{
				if(array[i]==temp1)
				  count1++;
				  if(array[i]==temp2)
				    count2++;
			} 
 	      
        	if(count1>=N-1 || count2>=N-1 )
			 printf("YES\n");
			 
			else
			printf("NO\n"); 	
		
		
		
	}
	
	return 0;
	
}
