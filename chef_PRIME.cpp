/*  code written by krishan chopra

this code is protected by copyrights and end user agreement 

viewing,circulation or archival of this code is illegal  !!!!!!!!  seriously????

code has expired its use by date...      best before %^&** days after packaging

copy code at own risk

*/



#include<iostream>
#include<vector>
#include<utility>
#include<list>
#include<stack>
#include<algorithm>
#include<set>
#include<stdio.h>
#include<map>
#include<queue>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>
#include<time.h>
using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 


#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define gc getchar
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

int primes[100000],size=0;

int india(int num,int size)
{
	for(int i=0;i<size;i++)
	 {
	 	 if(num%primes[i]==0)
	 	   return 0;
	 	   
	 }
	  return 1;
	 //  to check particular number prime or not
	
}



// marks all mutiples of 'a' ( greater than 'a' but less than equal to 'n') as 1.
void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
 
// A function to print all prime numbers smaller than n
int  sieve(int N)
{     
       int n=sqrt(N); 
      int p=0;
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n];
        memset(arr, 0, sizeof(arr));
 
        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                
                primes[p]=i+1;   p++;  //  this array stores all prime numbers 
                 markMultiples(arr, i+1, n);
            }
        }
        return p;
    }
}
 







int main()
{
	int T,n,size,m,i,j,factor,check,array[100001];
	T=scan();
	while(T--)
	{
		
		m=scan();
		n=scan();
		
        for(i=0;i<=n-m;i++)
		   array[i]=m+i; 	    		
		
		 size=sieve(n);   //   array primes store all primes <sqrt(10^9)     size is sizeof primes
		
		for(i=0;i<=n-m;i++)
		{
			
			if(array[i]==0)
			  continue;
			  
			 check=india(array[i],size);
			    if(check==0)
			      array[i]=0;
			     
			    
			  factor=array[i];
			  
			  j=2;
			  while((j*factor<=n))
			  {
			  	array[j*factor]=0;
			  	j++;
			  	
			  }
			  
			  
		}
		
		for(i=0;i<=n-m;i++)
		  {
		  	if(array[i]>0)
		  	  printf("%d\n",array[i]);
		  }
		printf("\n");
	}
	
	return 0;
	
}
