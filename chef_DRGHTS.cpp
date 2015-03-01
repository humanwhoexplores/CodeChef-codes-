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



 #define sz(a) int((a).size()) 
 #define pb push_back 
 #define all(c) (c).begin(),(c).end() 
 #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
 #define present(c,x) ((c).find(x) != (c).end()) 
 #define cpresent(c,x) (find(all(c),x) != (c).end()) 

bool check[50001]={false};  //   this is to check the node has not been visited

vector<int> vec[50010]; 
stack<int>mystack;

int array[50001];

void dfs(int i) 
{ 
       if(!V[i]) 
	   { 
            V[i] = true; 
            for_each(all(W[i]), dfs); 
       }
	    
 } 

void DFS(int i)
{
	int j,k,count=0;
	
	if(array[i]==1)
	  count++;
	
	if(!check[i])
	{
		check[i]=true;   //  the node has been visited
		for(j=0;j<vec[i].size();j++)
		{  
		    if(array[vec[i][j]]==1)
		       count++;
			mystack.push(vec[i][j]);
		    
			 		
		}
			
	}
	
}


int main()
{
	cin.sync_with_stdio(0);
	cin.tie();
    int N,i,j,M,a,b,ans1=0,ans2=0,flag;
    cin>>N>>M;
    
	
	
	 for(i=1;i<=N;i++)
	   cin>>array[i];
	 
	 for(i=1;i<=M;i++)
	 {
	 	cin>>a>>b;
        vec[a].push_back(b);
		vec[b].push_back(a);
		  	    
	 }  
     
     for(i=1;i<=N;i++)
     {   //   this is to calculate how many nodes lie on a draught path
     	if(array[i]==0)  
     	  continue;   //  if node itself has closed windows continue;
     	
     	  flag=0;
     	for(j=0;j<vec[i].size();j++)
     	{     //  to lie on a draught path   a node must have open windows and must  have atleast one neighbour with open windows
     		if(array[vec[i][j]]==1)
     		{
     			flag=1;
     		    break;
     		}
     		
     	}
     	
     	if(flag==1)
     	  ans2++;
     	
     }
     
     
     
     
	
	return 0;
}
