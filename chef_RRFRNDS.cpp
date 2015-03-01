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
#include<bitset>
#include<cstddef>  //   for size_t
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


bitset<2000>foo[2000];

int main()
{
	
	int N,i,j,ans=0;
	scanf("%d",&N);
	  
	char str[2001];
	  
	REP(i,N)
	{
		scanf("%s",str);
		
		REP(j,N)
		 {
		 	if(str[j]=='1')
		 	 foo[i].set(j); 
		 }
	
	}
	
      
	  	
	REP(i,N)
	FOR(j,i+1,N)
	if( !foo[i].test(j) && (foo[i]&foo[j]).any()  )
	    ans+=2;
	
	
	cout<<ans<<"\n";
	
}

