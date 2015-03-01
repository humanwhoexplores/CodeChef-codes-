#include <stdio.h>
#include <string.h>

#define gc getchar
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}


int primes[5000001];
long long ans[5000001];
 
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
int SieveOfEratosthenes(int n)
{    int p=0;
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n+10];
        memset(arr, 0, sizeof(arr));
 
        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
           primes[1]=1;
        for (int i=2; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                
                primes[i]=primes[i-1]+1;    //  this array stores all prime numbers 
                 markMultiples(arr, i+1, n);
            }
        }
        return p;
    }
}
 
// Driver Program to test above function
int main()
{
    int n = 5000000,size,i,T,N;

    size=SieveOfEratosthenes(n);
    
      
      	ans[1]=1;
      	
      	for(i=2;i<=N;i++)
      	{
      	
      		ans[i]=(1+primes[i])*ans[i-1];
      		 ans[i]%=1000000007;
      		
          }
      	
      
      
    
    
    T=scan();
    while(T--)
    {
    	N=scan();
    	
    	printf("%lld\n",ans[i]);
    	
    	
    }

    return 0;
}
