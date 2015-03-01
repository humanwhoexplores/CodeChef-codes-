/*  code written by krishan chopra

this code is protected by copyrights and end user agreement 

viewing,circulation or archival of this code is illegal  !!!!!!!!  seriously????

code has expired its use by date...   best before @#^& days after packaging

!!!!!! copy code at own risk !!!!!!!!

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


set<int> store;
set<int>::iterator it;

int getMid(int s, int e) {  return s + (e -s)/2;  }
 
/*  A recursive function to get the sum of values in given range of the array.
    The following are parameters for this function.
 
    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
int getquery(int *st, int ss, int se, int qs, int qe, int index)
{      
       int mid,temp2;
      // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qs <= ss && qe >= se) //   means query segment is 1-10  and current is 3-7  so return this segment
       {
        store.insert(st[index]);
        
         mid = getMid(ss, se);  //   it keeps on  doing it until it gets one of the above 2 conditions
          
          
          
		 return 0;

        
        
        }
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
     mid = getMid(ss, se);  //   it keeps on  doing it until it gets one of the above 2 conditions
    return getquery(st, ss, mid, qs, qe, 2*index+1) +
           getquery(st, mid+1, se, qs, qe, 2*index+2);
}
 

 
// Return sum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses getSumUtil()
int query(int *st, int n, int qs, int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        // such input shall never be given
        return -1;
    }
 
    return getquery(st, 0, n-1, qs, qe, 0);
}
 
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    // If there is one element in array, store it in current node of 
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];   //   current index of tree is si
        return arr[ss];
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the sum of values in this node
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +    //     here si has more than one element;; it stores the sum of smaller ranges 
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
 
/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
int *constructST(int arr[], int n)
{
    // Allocate memory for segment tree
    int x = (int)(ceil(log2(n))); //Height of segment tree
    int max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    int *st = new int[max_size];
 
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);   // starting index is 0 bcoz root at index 0
 
    // Return the constructed segment tree
    return st;
}
 
// Driver program to test above functions
int main()
{
    int n,m,i,left,temp,right,SUM;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    int *st = constructST(arr, n);
     //  consider 0 indexing for index  
        
         
 
    scanf("%d",&m);
	while(m--)
	{   SUM=0;  
		scanf("%d%d",&left,&right);
		left--; right--;   //   0 indexed
		
	    temp=query(st,n,left,right);
	   
	   for(it=store.begin();it!=store.end();it++)
	   {
	   	
	   	cout<<*it<<"\t";
	   }
	   cout<<"\n";
	   for(it=store.begin();it!=store.end();it++)
	   {
	   	    if(*it<=(SUM+1))
	   	        SUM=SUM+*it;
			else
			  break;			
			   
	   }
	   
	   	   printf("%d\n",SUM+1);
	
	    store.clear();
	
	} 
 
 
 
    return 0;
}


