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



/*ull mod_mul(ull x, ull y, ull mod) {
x %= mod;
y %= mod;
ull z = 0;
for (; x; x >>= 1){
if(x & 1)
if((z += y) >= mod)
z -= mod;
if((y += y) >= mod)
y -= mod;
}
return z;
}
*/



ull multiple(ull a, ull b, ull c) // a * b % c

{

  if (b == 0) {  //Base case a * 0 =0

      return 0;

  }

  ull ret = multiple(a, b >> 1, c) ; //Multiply a by (b>>1).

  ret = (ret + ret) % c;  //we double the value of ret i. 2 * (a * (b>>1)). Take MOD in this step

  if (b & 1) {  //implies b is ODD

      ret = (ret + a) % c;  //if b is odd then we express it as a * b = a+ a * (b>>1). We have computed a*(b>>1) in the previous step by recursion i.e the value ret. We now add the extra a to it.

  }

  return ret;
}


/*


int main()
{
	cin.sync_with_stdio(0);
	cin.tie();
    
    ull T,N,l[1000],A,B,C,i;
	
	char str[1001];	
	scanf("%llu",&T);
	while(T--)
	{
		scanf("%llu",&N);
		
		for(i=0;i<N;i++)
		    scanf("%llu",&l[i]);
		  
		scanf("%llu%llu%llu",&A,&B,&C);  
		scanf("%s",str);
		
		ull first=0,last=N-1,r=0,add=0,mul=1;
		
		
		for(i=0;i<N;i++)
		{
			if(str[i]=='R')
			 {
			 	
			 	
			 	if(r==0)   //   means initially it was not set for  reversal
			 	{
			 		r=1;   //  reverse now
			 		l[first]=multiple(l[first],mul,C);  //  to get mod of a  position to be printed
			 		l[first]=(l[first]+add)%C;           //  now adding the stuff to be added  
			 		printf("%llu ",l[first]);
			 		first++; 
			 		continue;
			 	}
			 	
			 	if(r==1)  //  means  initially  set for reversal
			 	{
			 		
			 		r=0;  //    keep  it in original form  
			 		 
					l[last]=multiple(l[last],mul,C);
					l[last]=(l[last]+add)%C;
					printf("%llu ",l[last]);
					last--;  
					  
					continue;  
					   
			 		
			 	}
			 	
			 }
			
			if(str[i]=='M')
			{
			   if(r==1){
			    l[last]=multiple(l[last],mul,c);
			    l[last]=(l[last]+add)%c;
			    l[last]=multiple(l[last],b,c);
			    add=multiple(add,b,c);
			    mul=multiple(mul,b,c);
				printf("%llu ",l[last]);
				last--;
				continue;
			}
			else{
			    l[first]=multiple(l[first],mul,c);
			    l[first]=(l[first]+add)%c;
			    l[first]=multiple(l[first],b,c);
			    add=multiple(add,b,c);
			    mul=multiple(mul,b,c);
				printf("%llu ",l[first]);
				first++;
				continue;
			    }
		    }
			   
			   
		   if(str[i]=='A'){
		    if(r==1){
			    l[last]=multiple(l[last],mul,c);
			    l[last]=(l[last]+add)%c;
			    l[last]=(l[last]+a)%c;
			    add=(add+a)%c;
				printf("%llu ",l[last]);
				last--;
				continue;
			        }
			else{
			    l[first]=multiple(l[first],mul,c);
			    l[first]=(l[first]+add)%c;
			    l[first]=(l[first]+a)%c;
			    add=(add+a)%c;
				printf("%llu ",l[first]);
				first++;
				continue;
			     }
		    }
	   	   
			   
	    }
	  		
			
			
    }
		
		
		
	

	return 0;
	
}*/



int main(){
int t,n,i,j,x,first,last,len;
ull *l,a,b,c,r,add,mul;
char *str;
scanf("%d",&t);
while(t--){
	scanf("%d",&n);
	l=(ull *)malloc(n*sizeof(ull));
	str=(char *)malloc(MAX*sizeof(char));
	for(i=0;i<n;i++){
		l[i]=read();
	}
	scanf("%llu%llu%llu\n",&a,&b,&c);
	gets(str);
	len=strlen(str);
	r=0;
	first=0;
	last=n-1;
	add=0;
	mul=1;
	for(i=0;i<len;i++){
		if(str[i]=='R'){
			if(r){
			    r=0;
			    l[first]=mod_mul(l[first],mul,c);
			    l[first]=(l[first]+add)%c;
				printf("%llu ",l[first]);
				first++;
				continue;
			}
			else{
			    r=1;
			    l[last]=mod_mul(l[last],mul,c);
			    l[last]=(l[last]+add)%c;
				printf("%llu ",l[last]);
				last--;
				continue;
			}
		}
		if(str[i]=='A'){
		    if(r==1){
			    l[last]=mod_mul(l[last],mul,c);
			    l[last]=(l[last]+add)%c;
			    l[last]=(l[last]+a)%c;
			    add=(add+a)%c;
				printf("%llu ",l[last]);
				last--;
				continue;
			}
			else{
			    l[first]=mod_mul(l[first],mul,c);
			    l[first]=(l[first]+add)%c;
			    l[first]=(l[first]+a)%c;
			    add=(add+a)%c;
				printf("%llu ",l[first]);
				first++;
				continue;
			}
		}
		if(str[i]=='M'){
			if(r==1){
			    l[last]=mod_mul(l[last],mul,c);
			    l[last]=(l[last]+add)%c;
			    l[last]=mod_mul(l[last],b,c);
			    add=mod_mul(add,b,c);
			    mul=mod_mul(mul,b,c);
				printf("%llu ",l[last]);
				last--;
				continue;
			}
			else{
			    l[first]=mod_mul(l[first],mul,c);
			    l[first]=(l[first]+add)%c;
			    l[first]=mod_mul(l[first],b,c);
			    add=mod_mul(add,b,c);
			    mul=mod_mul(mul,b,c);
				printf("%llu ",l[first]);
				first++;
				continue;
			}
		}
	}
	free(l);
	free(str);
	printf("\n");
}
}   

