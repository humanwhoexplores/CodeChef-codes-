#include <bits/stdc++.h>
		
using namespace std;

#define iinp() input<int>()

/*  
     FOR   COMPLETE INFORMATION ABOUT IT  REFER TO MY CODE
     
       CHEF_FIRESC     FOR COMPLET EXPLANANTION
	   
*/

 
#define get getchar_unlocked
 
//fast function to scan various integer data types
template <typename T>
inline T input() {
	T n = 0;
	int s = 1;
	char p = get();
 
	while((p < '0' || p > '9') && p != EOF && p != '-')
		p = get();
 
	if(p == '-'){ s = -1, p = get(); }
 
	while(p >= '0' && p <= '9') {
		n = (n << 3) + (n << 1) + (p - '0');
		p = get();
	}
	return n*s;
}
 
#define MAXN 100000
long long int MOD = 1000000007;
inline long long int mod(long long int x)
{
	if(x<MOD)
		return x;
	else if(x < 2*MOD)
		return x-MOD;
	else
		return x%MOD;
}

int a[MAXN+1];
int visited[MAXN+1];
int sizex,sizey;
 
inline int root(int id,int &size)
{
	size=0;
	while(id != a[id])
	{
		a[id] = a[a[id]];
		id = a[id];
		size++;
	}
	return id;
}
 
inline int qunion(int x,int y)
{
	x = root(x,sizex);
	y = root(y,sizey);
	if(sizex > sizey)
		a[y] = x;
	else
		a[x] = y;
}
 
inline bool qfind(int x,int y)
{
	return (root(x,sizex) == root(y,sizey));
}
 
int main()
{
	int t,n,m;
	int i;
	int x,y;
	int r;
	long long int count,captains;
	t = iinp();
	while(t--)
	{
		n = iinp();
		m = iinp();
		for(i=0;i<n;i++)
		{
			a[i] = i;
			visited[i] = 0;
		}
		while(m--)
		{
			x = iinp()-1;
			y = iinp()-1;
			qunion(x,y);
		}
		// for(i=0;i<n;i++)
		// 	printf("%d ",a[i]);
		// printf("\n");
		for(i=0;i<n;i++)
		{
			r = root(i,sizex);
			//printf("r = %d i = %d\n",r,i);
			visited[r]++;
		}
		count=0;captains=1;
		for(i=0;i<n;i++)
		{
			if(visited[i]!=0)
			{
				count++;
				captains = mod(captains*visited[i]);
				//printf("%lld %lld\n",count,captains);
			}
		}
		printf("%lld %lld\n",count,captains);
	
	}
	return 0;
} 
 

