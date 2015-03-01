#include<stdio.h> 
 /*   this is my code for FIRESC    fire escape routes   */
  
  
   /*    learnt  DFS and disjoint sets  */ 
 
#define MAXN 100000


int a[MAXN+1];
int visited[MAXN+1];
int sizex,sizey;
 
inline int root(int id,int &size)
{
	size=0;
	while(id != a[id])
	{
		a[id] = a[a[id]];  //   continue to look for the parent 
		id = a[id];         ///    let us find how it works
		size++;           
	}
	
	   //if set conaining x is bigger   y becomes its subset    and vice versa   ...
	   //  a[y] =x  means  y bcomes a part of a set  containing x tooo
	   //  this does not means x is the root  always..
	   //  we just store x at index y...
	   //   use of size  ,,  let there be 4 variables  l,m,x,y;
	   //  l,m,x  form one set  l is the root
	   //   at index l l is stored    at index m l is stored at x m is stored
	   //  x -> m -> l   x points to m  m to l;
	   //  there size ==3    (  2 in this func )
	   //  sizeof y =1;        (  0 i this func )   check initially size=0
	   //    y becomes member of this set             
	   //  now y->x->m->l
	
	
	
	return id;
}
 
inline int qunion(int x,int y)
{
	x = root(x,sizex);     //   tells the size of the set x whom x is a member
	y = root(y,sizey);     //    tells the size of    set y whom y is a member
	if(sizex > sizey)
		a[y] = x;     ///        if set conaining x is bigger   y becomes its subset    and vice versa   ...
	   //  a[y] =x  means  y bcomes a part of a set  containing x tooo
	   
	else
		a[x] = y;            ///    example to explain its function
		
		    // /       initially  let the input be   1 2  \n   2  3  \n (many more)
		    //    initially each elkement is a disjoint set of itself..  
			 //   input 1 2    makes union of 1,2    1 as root    let  this set be called rajnikanth 
			 //  when input 2 3   it finds   that  2 is a member of rajnikanth  makes 3 also member of rajnikanth   ass
			  //   bcoz sizeof(rajnikanth)> sizeof(3)     
}   
 
inline bool qfind(int x,int y)
{
	return (root(x,sizex) == root(y,sizey));
}
 
int main()
{
	int t,n,m,temp1,temp2;
	int i;
	int x,y;
	int r;
	long long int count,captains;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{ 
			a[i] = i;    //      initially the root of the set is the element itself.......
			             //       initially there are  n disjoint sets each containing 1 element  
			              //    the element is the root of set too.
			visited[i] = 0;    //    initially each node is unvisited
		}
		while(m--)
		{  
		    scanf("%d%d",&temp1,&temp2);
			x = temp1-1;  //   array  is 0 indexed
			y = temp2-1;  //   array is 0 indexed
			qunion(x,y); 
		}
		
		for(i=0;i<n;i++)
		{
			r = root(i,sizex);
			
			visited[r]++;
		}
		count=0;captains=1;
		for(i=0;i<n;i++)
		{
			if(visited[i]!=0)
			{
				count++;
				captains = (captains*visited[i])%1000000007;
	
			}
		}
		printf("%lld %lld\n",count,captains);
	}
	return 0;
}
