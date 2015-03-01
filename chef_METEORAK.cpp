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
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

int matrix[1001][1001];

void calculate()
{
	
	
	
	
}

int main()
{
	int N,M,K,x,y,i,Q,top,bot,array[1001];
	
	scanf("%d%d%d",&N,&M,&K);
	
	REP(i,K)
	{
		scanf("%d%d",&x,&y);
		matrix[x][y]=-1;
	
	}
	calculate(N,M);
	
	scanf("%d",&Q);
	while(Q--)
	{
	   scanf("%d%d",&top,&bot);
	}
	
	
	return 0;
}

