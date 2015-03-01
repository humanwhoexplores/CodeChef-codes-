#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int distance(int,int,int,int);

int main()
{
	int T,x1,y1,x2,y2,x3,y3,count=0,i,j,dist1,dist2,dist3,max,min1,min2;
	int dist[3];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		
		scanf("%d",&x1);
		scanf("%d",&y1);
		scanf("%d",&x2);
		scanf("%d",&y2);
		scanf("%d",&x3);
		scanf("%d",&y3);
		
		
		dist[0]=distance(x1,y1,x2,y2);
		dist[1]=distance(x2,y2,x3,y3);
		dist[2]=distance(x3,y3,x1,y1);
				
		sort(dist,dist+3);
		
		if(dist[2]==(dist[1]+dist[0]))
		 {
		 	count++;
		 	//cout<<"\n count =="<<count;
		 }
	
		
		
		
		
	}
	
	
	
	printf("%d\n",count);
	
	
}

int distance(int x1,int y1,int x2,int y2)
{
	
	int d,temp1,temp2;
	temp1=pow((x2-x1),2);
	temp2=pow((y2-y1),2);
	
	d=temp1+temp2;
	return d;
	
	
	
}


