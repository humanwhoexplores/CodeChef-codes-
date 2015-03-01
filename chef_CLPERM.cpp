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

#define LL long long
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
 int a[100001];
 int b[100001];


int main()
{
	
	cin.sync_with_stdio(0);
	cin.tie();

     
     int T,i,N;
     cin>>T;
     while(T--)
     {
     	cin>>N; 
     	
     	 
     	 FOR(i,1,K+1)
     	  cin>>a[i];
		   
		  sort(a+1,a+k+1);
		  
		  FOR(i,1,K+1)
		   b[i]=b[i-1]+a[i];   
     	 LL val=-1;
     	 
     	 FOR(i,1,K)
     	 {
     	 	  LL sum=a[i]*a[i-1]/2;
     	 	  sum-=b[i-1];
      	 	   if(a[i]>sum)
      	 	   {
      	 	   	val=sum;
      	 	   	break;
      	 	   }
      	 	
     	 }
     	
     	
     	if(val==-1)  val=N*(N+1)/2 - b[k];
     	
     	if(val%2) cout<<"Mom\n";
     	else  cout<<"Chef\n";
     	
     	 
     	
     	
     }

      

	return 0;
	
	
}
