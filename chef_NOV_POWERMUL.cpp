#include<iostream>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;
 
#define ll long long
 
ll modular_pow(ll base, ll exponent, int modulus)
{     //  function for modular exponentiation
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
 
 
 
void markMultiples(bool arr[], int a, int n)
{        //  copied from geeks for geeks      sieve of erato method
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
 
// A function to print all prime numbers smaller than n
int sieve(int n,int *yoyo)
{    int size=0;
      // copied from geeks for geeks
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n];
        memset(arr, 0, sizeof(arr));
 
        
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                
                yoyo[size]=i+1; size++;   // return the number of elements in yoyo[] which stores all prime factors<=number
				markMultiples(arr, i+1, n);
            }
        }
    }
return size;  
}
 
 
int main()
{
    int N,i,j,z,g,R,great,temp,temp2,flag,size,T,M,Q,yoyo[100001],hash1[100001],hash2[100001];
	long long up,down,ans,jaat;
    scanf("%d",&T);    //   yoyo stores all primes <=N....  hash1 all primes for numerator hash2 for denominator
    while(T--)
    {
    scanf("%d%d%d",&N,&M,&Q);
    size=sieve(N,yoyo);   //  number of prime numbers <= N;
     
	
	while(Q--)
	{     //  flag =1 if R>=N-R  else flag=2
	     up=1;down=1;ans=1;
   	    for(j=0;j<=N;j++)
	       {
	       	hash1[j]=0;
	       	hash2[j]=0;
	       }
	     
		scanf("%d",&R);
		if(R>=N-R)
		  {
		  	great=R;  // by this i calculate greater (R,N-R) ;; as it is cancelled by numerator
		  	flag=1;  //   i dont calculate this and start numerator operation from great+1 till N
		  }
		if(N-R>R)
		 {
		 	great=N-R;
		 	flag=2;
		 }
	      temp2=great+1;
	      while(temp2<=N)
	      {
	      temp=temp2;   //    by temp2 i iterate from great+1 till N ;;; temp stores current value of temp2
         for(j=0;j<size && yoyo[j]<=temp;)
         { 
         	if(temp%yoyo[j]==0)
         	  {
         	  temp=temp/yoyo[j];        //   operation done on temp;;;   temp bcomes temp/factor
         	  hash1[yoyo[j]]+=temp2;    //   but temp2 remains constant for one iteration of the loop then temp2++ for next iter
              }
         	if(temp%yoyo[j]!=0)  j++;
         	
         }
		  temp2++;
	    }
		 	
	    if (flag==2 && R>=2)   //  means  N-R>R ;;;  find powers for R;
	    {  temp2=2;  
		   while(temp2<=R)
		   {
		      temp=temp2;
	    	for(j=0;j<size && yoyo[j]<=temp;)
	    	{
	    		if(temp%yoyo[j]==0)
	    		  { 
				  temp=temp/yoyo[j];  hash2[yoyo[j]]+=temp2;
	    	      }
	    		if(temp%yoyo[j]!=0) j++;  
	    	}
	         temp2++;
	       }
		}
        
		
	    if (flag==1 && N-R>=2)   //  means  R>=N-R ;;;  find powers for R;
	    {  temp2=2;  
		   while(temp2<=N-R)
		   {
		     temp=temp2;
	    	for(j=0;j<size && yoyo[j]<=temp;)
	    	{
	    		if(temp%yoyo[j]==0)
	    		  { 
				  temp=temp/yoyo[j];  hash2[yoyo[j]]+=temp2;
	    	      }
	    		if(temp%yoyo[j]!=0) j++;  
	    	}
	         temp2++;
	       }
		}
       
     
 
          for(z=2;z<=N;z++)
          {
          	if(hash1[z]>=hash2[z])
          	 {
          	 	hash1[z]=hash1[z]-hash2[z];
          	 	hash2[z]=0;
          	 }
          	if(hash2[z]>hash1[z])
          	{
          		hash1[z]=0;
          		hash2[z]=hash2[z]-hash1[z];
          	}
          	
          }
       
       
       
        for(z=2;z<=N;z++)
          {
          	
          	if(hash1[z]>0)
          	{
          		
          		jaat=modular_pow(z,hash1[z],M);
          		up=up*jaat;
          		/*for(g=0;g<hash1[z];g++)   //   finds 
          		{
          			up=up*z;
          			if(up>=M)   //  i also tried by using up>=10 pow 10   but still TLE
          			  up=up%M;
          			
          			
          		}*/
          		if(up>=M)
          		up=up%M;
          	}
          	
          	
          }
          
          for(z=2;z<=N;z++)
          {
          	if(hash2[z]>0)
          	{    
          	      jaat=modular_pow(z,hash2[z],M);
          	      down=down*jaat;
          		/*for(g=0;g<hash2[z];g++)
          		{
          			down=down*z;
          			if(down>M)
          			  down=down%M;
          			
          			
          		}*/
          		if(down>=M)
          		down=down%M;
          	}
          	
          }
       
       
       ans=up/down;
       if(ans>=M)
        ans=ans%M;
        
        printf("%lld\n",ans);
       
       
       
 
     }
    
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
    
	return 0;
}  
