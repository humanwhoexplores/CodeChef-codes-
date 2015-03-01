// Dynamic Programming implementation of edit distance
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 

 
inline int min(int a, int b)
{
   return a < b ? a : b;
}
 
// Returns Minimum among a, b, c
int Minimum(int a, int b, int c)
{
    return min(min(a, b), c);
}

int sum=0,flag=1;

int edit( char *X, char *Y, int m, int n,int a, int b,int k)
{
    // Base cases
    if( m == 0 && n == 0 )
        sum+=0;
 
    if( m == 0 )
        sum+=n;
 
    if( n == 0 )
        sum+=m;
 
    
    int left = edit(X, Y, m-1, n) + a;
    int right = edit(X, Y, m, n-1) + a;
    int corner = edit(X, Y, m-1, n-1) + b*(X[m-1] != Y[n-1]);
    int temp; 
    
	temp=Minimum(left, right, corner);
	sum=sum+temp;
	if(sum>k)
	  {
	  	flag=-1;
	  	return;
	  }
	  
	
	
}
 
int main()
{    
     int T,a,b,k;
	 scanf("%d",&T);
	 while(T--)
	 {
	   ans=0; flag=1;
     char X[100001],Y[100001]; 
     scanf("%s%s",X,Y);
      
      
      printf("%d\n",edit(X,Y,strlen(X),strlen(Y),a,b,k));
      
     
     }
     
    return 0;
}
