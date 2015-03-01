#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

# define gc getchar

struct kyaa
{
	int comp;
	int arr;
	int dep;
};
	
	bool sortby(const kyaa &a,const kyaa &b)
{
	if(a.comp!=b.comp)return a.comp<b.comp;
	return a.arr<b.arr;
}
	

//bool sortby( struct &a,struct &)
inline int read ()
{
	char c;
	int n = 0;
 
	while ((c =gc ()) < 48);
	n += (c - '0');
	
	while ((c = gc ()) >= 48)
	  n = n * 10 + (c - '0');
	
	return n;
}



int main()
{
      int T,N,K,s,f,p,i,c,prev;
      	  
	  T=read();
	  while(T--)
	  {  
	  	N=read();
	  	K=read();
	  	kyaa obj[N];
	  	for(i=0;i<N;i++)
	  	{
	  		s=read();
	  		f=read();
	  		p=read();
	  		obj[i].comp=p;
			obj[i].arr=s;
			obj[i].dep=f; 
	  		
	  		
	  		
	  		
	  	}
	  	sort(obj,obj+N,sortby);
	  	
	  	c=1,prev=0;
		for(i=1;i<N;i++)
			if((obj[i].comp!=obj[i-1].comp)||(obj[i].comp==obj[i-1].comp && obj[prev].dep<=obj[i].arr))c++,prev=i;
		
	  	
	 	
	    printf("%d\n",c);

	  	
	  	
	  	
	  }	
	
	
	return 0;
}
