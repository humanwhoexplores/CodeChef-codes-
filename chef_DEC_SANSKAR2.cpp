#include<stdio.h>
#include<math.h>

#define gc getchar
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

int counter(int *arr, int n,int max)
{
	 int i,j,sum,count=0;
        for(i=1;i<pow(2,n);i++)   ///   i=0 IS THE NULL SET
        {   
        	sum=0;
           for(j=0;j<n;j++)
           {

           	if((i & (1<<j))!=0)
           	    sum+=arr[j];
           	
           }
           if(sum==max)
           {
           	count++;
           }
           
		}
 
	return count;
	
} 




int main()
{
  int T,N,K,array[21],i,j,max,ans;
  T=scan();
  while(T--)
  {
  	N=scan();
  	K=scan();
  	
  	for(i=0;i<N;i++)
  	 array[i]=scan();
  	 
  	max=array[0];
	  for(i=0;i<N;i++)
	   {
	   if(array[i]>max)
	      max=array[i]; 
       }
  	
  	ans=counter(array,N,max);
  	
  	if(ans>=K)
  	printf("yes\n");
  	else
  	printf("no\n");
  	
  	
  	
  }	
	
   	
	
return 0;	
}
