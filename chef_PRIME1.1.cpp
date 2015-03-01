#include<stdio.h>

#define gc getchar_unlocked
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

 
int main(){  
int t;
t=scan();
while(t--)
{
    int n,m;
    m=scan(); n=scan();    // Primes from m-->n
    int primes[n-m+3];       // Max Number of primes
     
    for(int i=0;i<=n-m+1;i++)
        primes[i]=0;     // Set all numbers shifted by a base to 0.
     
    for(int p=2;p*p<=n;p++)
    {
        int l = m/p;               // Closest factor.
        l=l*p;
                                       //   cruxx  is  l=m/p    l=l*p    == (m/p)*p;  
                                       //   l is approx m;
                                       //  in the for loop j=l(approx m)  and j+=p;  
                                       //  here it is cancels out factors much like sieve
                                       
        for(int j=l;j<=n;j+=p)
        {   
            if(j!=p && j>=m)
                primes[j-m]=1; // Cancel out the factors in the range.
        }
        
        ///  example  m=1000  n=3000    p=2 to p^2<=3000
        //  when p=2 it removes  1000 1002..1004........3000
        //now p=3  l=1000/3= 333    l=333*3=999
        //  now it removes 999+3 999+6  .......
        ///  p=4    l=250   l=l*p=1000
        //  j=1000  it removes  1000  10004 1008 .........
        //  similarly all  factors are removed
        
        //   p goes to max p^2<n
        
        
    }
     
    for(int i=0;i<n-m+1;i++)
    {
        if(primes[i]==0 && (m+i)!=1)        // Shift the base again
            printf("%d\n",m+i);         // Print the numbers not cancelled out.
    }
}
 
return 0;
}
