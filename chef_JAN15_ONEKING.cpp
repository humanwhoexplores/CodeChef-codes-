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
 
int main()
{
	
	int T,N,a,b,i,count,etime;
	scanf("%d",&T);
	while(T--)
	{
	  count=0;
	set< pair<int,int> > S;
	
	set< pair<int,int> >::iterator it;
	
	
		
		scanf("%d",&N);
		
		for(i=0;i<N;i++)
		{
			scanf("%d%d",&a,&b);
			                                //  it->first represent start time
			S.insert(make_pair(b,a));  //  job sorted in order of end time
		}
	  
	  
	  
	   it=S.begin();
	
	   //  selecting first job  	
	   etime=it->first;
	   it++; count++;
	   // selecting remaining jobs
	   while(it!=S.end())
	   {
	   	 if(etime>=it->second)
	   	   {  it++;
	   	   continue;
	       }
         if(etime<it->second)
            {
            	count++;
            	etime=it->first;
            	it++;
            }
            
            
	   }	
	   
	   printf("%d\n",count);
	
	}
	
	
	
} 
