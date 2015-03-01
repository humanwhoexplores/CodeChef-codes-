#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


#define gc getchar
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}


bool sortby(int a,int b)
{
	return a>b ? a:b;
	
}

int main()
{
  int N,K,P,x,y,temp;
   //   K is the maximum distance allowed
   
   N=scan();
   K=scan();
   P=scan();
   int array[N],i,status[N],status2[N];
   
   for(i=0;i<N;i++)
     array[i]=scan();
     
     sort(array,array+N);
      
     for(i=0;i<N;i++)
         {
         status[i]=0;
         status2[i]=0;
         }
	   
	   status[0]=1;  
      for(i=1;i<N;i++)
	  {
	  	if((array[i]-array[i-1])<=K)
	  	    status[i]++;
	  		
	  	
	  	
	  	
	  	
	  }  
	  status[N-1]=1;
	  for(i=N-1;i>=1;i--) 
       {
       	if((array[i]-array[i-1])>=K)
       	{
       		status2[i-1]++;
       		
       	}
       	
       }
   while(P--)
   {
   	  x=scan();
   	  y=scan();
   	  
   	  if(y==x)
   	  {
   	  	cout<<"yes\n";
   	  	
   	  }
   	   if(y!=x)
   	   {  x-=1;
   	      y-=1;
   	   
   	      if(x>y)
   	      {
   	      
		 
			 
		  if(status[y]>0)
		   cout<<"yes\n";
		  else
		  cout<<"no\n"; 
   	   
	      }
	      
	      if(y>x)
	      {
	      	if(status2[x]>0)
	      	 cout<<"yes\n";
	      	else
			  cout<<"no\n"; 
	      	
	      	
	      }
		     
      }   
   	
   	
   }
  	
	
	return 0;
}
