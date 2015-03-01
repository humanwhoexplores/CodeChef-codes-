#include<stdio.h>
using namespace std;

int main()
{
	int n,j,size;   // n is the number of test cases
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&size);
		if(size%2==0)
		printf("%d\n",size);
	    else
	    printf("%d\n",size-1);
	}
	
}
