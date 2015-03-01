#include <iostream>
#include<algorithm>
#include<cstdio>
#define gc getchar
using namespace std;
int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}




typedef struct guest
{	int s,f,p;	}guest;
bool cmp(const guest &a,const guest &b)
{
	if(a.p!=b.p)return a.p<b.p;
	return a.f<b.f;
}
int main() {
	register int t,n,k,i,c,prev;
	t=scan();
	while(t--)
	{
		n=scan();k=scan();
		guest a[n];
		for(i=0;i<n;i++)
			{a[i].s=scan();a[i].f=scan();a[i].p=scan();}
		if(n==0 || n==1){printf("%d\n",n);continue;}
		sort(a,a+n,cmp);
		c=1,prev=0;
		for(i=1;i<n;i++)
			if((a[i].p!=a[i-1].p)||(a[i].p==a[i-1].p && a[prev].f<=a[i].s))c++,prev=i;
		cout<<c<<"\n";
	}
	return 0;
} 
