// Program to show segment tree operations like construction, query and update
#include <stdio.h>
#include <math.h>
 
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) {  return s + (e -s)/2;  }
 
/*  A recursive function to get the sum of values in given range of the array.
    The following are parameters for this function.
 
    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
int getSumUtil(int *st, int ss, int se, int qs, int qe, int index)
{
    // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qs <= ss && qe >= se) //   means query segment is 1-10  and current is 3-7  so return this segment
        return st[index];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);  //   it keeps on  doing it until it gets one of the above 2 conditions
    return getSumUtil(st, ss, mid, qs, qe, 2*index+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*index+2);
}
 
/* A recursive function to update the nodes which have the given index in
   their range. The following are parameters
    st, index, ss and se are same as getSumUtil()
    i    --> index of the element to be updated. This index is in input array.
   diff --> Value to be added to all nodes which have i in range */
void updateValueUtil(int *st, int ss, int se, int i, int index)
{
    // Base Case: If the input index lies outside the range of this segment
    if (i < ss || i > se)
        return;
 
    // If the input index is in range of this node, then update the value
    // of the node and its children
    st[index] = se-ss+1-st[index];  //   this is the current node we update it first.  followed by its children  //  if arr[5] is a part of the current range   thenn   update all its children which have arr[5] in them  
    
	 
	if (se != ss)   // this is for children of the node.  
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*index + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*index + 2);
    }

}
 
// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue(int arr[], int *st, int n, int left,int right)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }
 
    for(int i=left;i<=right;i++)
    {
    	if(arr[i]==1)
    	  arr[i]=0;
    	else
		arr[i]=1;  
    }
 
    
 
    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, left,right, 0);
}
 
// Return sum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses getSumUtil()
int getSum(int *st, int n, int qs, int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
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
{     //   consider 0 for tails up
      //  consider 1 for heads up
    int n,q,type,left,right;
    scanf("%d%d",&n,&q);
    int arr[n]={0};  //   initially all tails up
    
 
    // Build segment tree from given array
    int *st = constructST(arr, n);
     //  consider 0 indexing for index  
     while(q--)
     {
        scanf("%d%d%d",&type,&left,&right);
        if(type==1)
        {
        
      printf("Sum of values in given range = %d\n", getSum(st, n, left, right));   
        }
        if(type==0)
        {
        updateValue(arr, st, n, left,right);
        }
       
     }
    return 0;
}
