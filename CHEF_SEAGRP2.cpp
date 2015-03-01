// A C++ program to find maximal Bipartite matching.
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
 
// M is number of applicants and N is number of jobs
//#define M 6
//#define N 6
 
 
 
inline int read ()
{
	char c;
	int n = 0;
 
	while ((c = getchar_unlocked ()) < 48);
	n += (c - '0');
	
	while ((c = getchar_unlocked ()) >= 48)
	  n = n * 10 + (c - '0');
	
	return n;
}
 
 
 
 
 
// A DFS based recursive function that returns true if a
// matching for vertex u is possible
bool bpm(bool bpGraph[][],int M,int N, int u, bool seen[], int matchR[])
{
    // Try every job one by one
    for (int v = 0; v < N; v++)
    {
        // If applicant u is interested in job v and v is
        // not visited
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true; // Mark v as visited
 
            // If job 'v' is not assigned to an applicant OR
            // previously assigned applicant for job v (which is matchR[v]) 
            // has an alternate job available. 
            // Since v is marked as visited in the above line, matchR[v] 
            // in the following recursive call will not get job 'v' again
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v], seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 
// Returns maximum number of matching from M to N
int maxBPM(bool bpGraph[][],int M,int N)
{
    // An array to keep track of the applicants assigned to
    // jobs. The value of matchR[i] is the applicant number
    // assigned to job i, the value -1 indicates nobody is
    // assigned.
    int matchR[N];
 
    // Initially all jobs are available
    memset(matchR, -1, sizeof(matchR));
 
    int result = 0; // Count of jobs assigned to applicants
    for (int u = 0; u < M; u++)
    {
        // Mark all jobs as not seen for next applicant.
        bool seen[N];
        memset(seen, 0, sizeof(seen));
 
        // Find if the applicant 'u' can get a job
        if (bpm(bpGraph, u, seen, matchR))
            result++;
    }
    return result;
}
 
// Driver program to test above functions
int main()
{    
     int T,N,M,i,j,xco,yco,namaste,flag;
     T=read();
     while(T--)
     {
          N=read();
          M=read();
        
         bool bpGraph[M][N];
         for(i=0;i<M;i++)
            {
            	 for(j=0;j<N;j++)
            	    {
            	    	bpGraph[i][j]=0;
            	    }
            }
	
	     for(i=0;i<M;i++)
	       {
	       	  xco=read();
	       	  yco=read();
	       	  bpGraph[xco-1][yco-1]=1;
	       	  
	       }
	        
	        namaste=maxBPM(bpGraph,M,N);
	        
	        if(N%2==0)
	         {
	         	if(namaste==N/2)
	         	  flag=1;
	         	  else flag=-1;
	         }
	         
	         if(N%2!=0)
	         {
	         	if(namaste==(N+1)/2)
	         	 flag=1;
	         	 else flag=-1;
	         }
	
               if(flag==1)
			    cout<<"YES\n";
				else 
				cout<<"NO\n";	
    // Let us create a bpGraph shown in the above example
    /*bool bpGraph[M][N] = {  {0, 1, 1, 0, 0, 0},
                        {1, 0, 0, 1, 0, 0},
                        {0, 0, 1, 0, 0, 0},
                        {0, 0, 1, 1, 0, 0},
                        {0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 1}
                      };
 
    cout << "Maximum number of applicants that can get job is "
         << maxBPM(bpGraph);
 */  }
    return 0;
}
