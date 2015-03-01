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

typedef vector<int> vec; 
typedef vector<vec> vvi; 
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

multiset<int> mulset;
multiset<int>::iterator it;


void mark(int *array,int n)
{
       int i,j,sum;	
	
	   for(i=1;i<pow(2,n);i++)
        {
        	sum=0;
           for(j=0;j<n;j++)
           {
           	if((i & (1<<j))!=0)
           	    sum=sum+array[j];
           	
           }
        //   cout<<"   removing  sum  =="<<sum<<"\n";
           mulset.erase(mulset.find(sum));
           
		}


}







int main()
{
	
	int T,N,size,i,temp,array[15],k;
	
	T=scan();
	while(T--)
	{   
		N=scan();
		size=pow(2,N);
		
		for(i=0;i<size;i++)
		{ 
		    temp=scan();
			mulset.insert(temp);
				 
		}
		
		for(it=mulset.begin();it!=mulset.end();it++)
		   {
		   	  cout<<*it<<"      ";
		   }
		cout<<"\n";
		
		mulset.erase(mulset.find(0));   //   to remove null set  for empty set
		 k=0; 
		 it=mulset.begin();
		 array[k]=*it; k++;
		   mark(array,k);
		 while(k<N)
		 {  
		  
		
		    it=mulset.begin();
		     array[k]=*it; k++;
		     mark(array,k); 
		  
	     }
		
		for(i=0;i<N;i++)
		 printf("%d\n",array[i]);
		
		
		
	}
	
	
	return 0;
}

