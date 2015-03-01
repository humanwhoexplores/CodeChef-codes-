#include<stdio.h>

int gcd(int,int);
int main()
{
	int  T,A,d,m,i,j;char B[300];
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&A);
	    
	    scanf("%s",B);
	    if(A==0)
	    printf("%s\n",B);
		else if(A>0)
	    {
	    
		for(i=0,d=0;B[i]!='\0';i++)
		{   
		    d=10*d+(int)B[i]-48;
		    d=d%A;
		} 	
				 
		printf("%d\n",gcd(A,d));
	    }
		
	}
	
	
	
	
	
}


int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
