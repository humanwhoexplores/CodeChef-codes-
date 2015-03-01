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
typedef vector<v> vvi; 
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
#define gc getchar_unlocked
inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}

int main()
{
	int T,i,j,len,change,array[1000001];   char temp;
	T=scan();
	while(T--)
	{
		while(scanf("%c",&temp))
		   vec.push_back('temp'-48);
		
		change=0;
		 len=vec.size();
		i=0; j=len-1;
		for(;i>=j;i++,j--)
		{   
		     if(i==j)
		      {
		      	if(change>=0)
		      	  array[i]=vec[i]
		      	if(change<0)
				   array	
		      	//    imp   case when middle one is 9 and  last ones are also 9
		      	
		      }
		     
			if(vec[i]==vec[j])
			{
				array[i]=vec[i];
				array[j]=vec[j];
				continue;
			}
			
			if(vec[i]>vec[j])
			{   
				array[i]=vec[i];
				array[j]=vec[j];
				if(change<0)
				  change=0;
				continue;  
			}
			
			if(vec[i]<vec[j] && i!=j)
			{
				array[i]
				
			}
			
			
			
		}
		
		
	}
	
	return 0;
	
}
