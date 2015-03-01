#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int distance(int,int,int,int,int);

int main()
{
	int T,x1,y1,x2,y2,x3,y3,R,count=0,i,j;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		count=0;
		scanf("%d",&R);
		scanf("%d",&x1);
		scanf("%d",&y1);
		scanf("%d",&x2);
		scanf("%d",&y2);
		scanf("%d",&x3);
		scanf("%d",&y3);
		
		
		count=distance(x1,y1,x2,y2,R);
		count=distance(x2,y2,x3,y3,R);
		count=distance(x3,y3,x1,y1,R);
				
				
		
		
		if(count>=2)
		printf("yes\n");
		else
		printf("no\n");
		
		
	}
	
	
	
	//printf("%d\n",count);
	
	
}

int distance(int x1,int y1,int x2,int y2,int r)
{
	
	int temp1,temp2;
	temp1=((x2-x1)*(x2-x1));
	temp2=((y2-y1)*(y2-y1));
	
	
	if(temp1+temp2<=r*r)
	return 1;
	return 0;
	
	
	
}


