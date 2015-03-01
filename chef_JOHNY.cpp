#include<stdio.h>
#include<algorithm>
using namespace std;

/*int Partition(int *a, int beg, int end)          //Function to Find Pivot Point
{
int p=beg, pivot=a[beg], loc;

for(loc=beg+1;loc<=end;loc++)
{
if(pivot>a[loc])
{
a[p]=a[loc];
a[loc]=a[p+1];
a[p+1]=pivot;

p=p+1;
}
}
return p;
}


void QuickSort(int *a, int beg, int end)
{
if(beg<end)
{
int p=Partition(a,beg,end);                       //Calling Procedure to Find Pivot

QuickSort(a,beg,p-1);                             //Calls Itself (Recursion)
QuickSort(a,p+1,end);			              //Calls Itself (Recursion)
}
}*/

int linear(int a[],int n,int info)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]==info)
		return i;
		
	}
}

int main()
{
	
  int T,N,K,j,i,temp,ans;
  int length[101];
  scanf("%d",&T);
  for(j=0;j<T;j++)
  
  {
  	scanf("%d",&N);
  	for(i=1;i<=N;i++)
  	{
  		scanf("%d",&length[i]);
  		
  	}
  	scanf("%d",K);
  	temp=length[K];
  	//beg=1;end=N;
	  
	  sort(length,length+N);
	 // QuickSort(length,beg,end);
  	
  	for(i=1;i<=N;i++)
  	{
  		printf("%d\n",length[i]);
  	}
  	
  	//ans=linear(length,N,temp);
  	printf("%d\n",ans);
  	
  	
  	}
  }

