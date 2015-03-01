#include<stdio.h>
#include<stdlib.h>
//#include<iostream>
//using namespace std;

int main()
{
	int cost[101][101],R,C,a,b,i,j,max,min,y_index;
	scanf("%d",&R);
	scanf("%d",&C);
	for(a=0;a<R;a++)
	 {
	 	for(b=0;b<C;b++)
	 	{
	 		scanf("%d",&cost[a][b]);
	 	}
	 }
	for(i=0;i<R;i++)
	{
		min=cost[i][0];
		for(j=0;j<C;j++)
		{
			if(cost[i][j]<min)
			{
				min=cost[i][j];
				y_index=j;
			}
		}
		max=cost[0][y_index];
		for(a=0;a<R;a++)                           //   ///   check for test case 2 3 9 8 8    2 11 6
		{
			if(cost[a][y_index]>max)
			{
				max=cost[a][y_index];
			}
		}
		if(max==min)
		{
		printf("%d\n",max);
	    exit(0);
		}
	}
	printf("GUESS\n");

}
