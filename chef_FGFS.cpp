#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>
#include <bits/stl_iterator_base_funcs.h>
//#include<bits/std_c++.h>
//using namespace std;

# define gc getchar



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
	int T,N,K,s,f,p,i,count;
	 
	  T=read();
	  while(T--)
	  {   count=0;
	  	 std::vector<int,std::pair<int,int> >vec;
	  	
	  	 N=read();
	  	 K=read();
	  	for(i=0;i<N;i++)
	  	 {
	  	 	s=read();
	  	 	f=read();
	  	 	p=read();
	  	    
	  	 
		   vec.push_back(p,std::make_pair(s,f));
		     
	    }
	  	
	  	  sort(vec,vec+N);
	  	for(i=0;i<N-1;i++)
	  	{
	  		if((vec[i].first)==(vec[i+1].first))
	  		{
	  			if((vec[i].second.second)<=(vec[i].second.first))
	  			{
	  				count++;
	  			}
	  			
	  			
	  		}
	  		
	  		else
	  		count++;
	  	}
	  	
	    printf("%d\n",count);
	  }	
	
	return 0;
}
