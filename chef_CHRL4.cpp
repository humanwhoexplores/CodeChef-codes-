#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


# define gc getchar

inline int read ()
{
	char c;
	int n = 0;
 
	while ((c = gc ()) < 48);
	n += (c - '0');
	
	while ((c = gc ()) >= 48)
	  n = n * 10 + (c - '0');
	
	return n;
}

int main()
{
	int N,i,j,z,x,y,min,K,iter; 
	N=read();
	K=read();
	
	int array[N]; int temp[N];
	long long dist[N];
	
	
	for(i=0;i<N;i++)
	   array[i]=read();
	   
	   dist[0]=array[0];
	   
	for(i=1;i<N;i++)
	{   iter=0;
		for(j=i-1;j>=i-K && j>=0;j--)
		   {
		   	  temp[iter]=dist[j];
		   	  
		   	iter++;
		   	
		   }
		min=temp[0];
		for(x=0;x<iter;x++)
		{
			if(min>temp[x])
			   min=temp[x];
			   
		}
		dist[i]=min*array[i];
	//std::cout<<"\n min=="<<min<<"\t array[i]"<<array[i];	
		if(dist[i]>1000000007)
		   dist[i]%=1000000007;
		   
	}
	
	
	cout<<dist[N-1]<<"\n";
	
	/*for(i=0;i<N;i++)
	  std::cout<<"dist   "<<i+1<<"\t"<<dist[i]<<"\n"; 
	*/
	return 0;


}
