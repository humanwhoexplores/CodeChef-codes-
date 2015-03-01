#include<stdio.h>

using namespace std;


int count[100001];
int main()
{
	int N,i,j,x,temp,counter=0;
	scanf("%d",&N);
	int data[100001];
	for(x=0;x<N;x++)
	{
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&data[i]);
		
	}
	
	for(i=0;i<N;i++)
	{
		temp=data[i];
		count[temp]+=1;
	}
	
	for(j=1;j<=100000;j++)
	{
		if(count[j]>0)
		{
			counter++;
		}
	}
	printf("%d\n",counter);
}
}
