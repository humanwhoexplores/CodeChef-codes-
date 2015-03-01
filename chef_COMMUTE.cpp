#include<stdio.h>

int fetch(int ,int,int);
int main()
{
	
	int T,n,i,x,l,f,time,temp,temp1,arrayx[1000],arrayl[1000],arrayf[1000];
	scanf("%d",&T);
	while(T--)
	{    time=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arrayx[i]);  // originating time of train
			scanf("%d",&arrayl[i]);  //  time taken to cover distance between 2 stations
			scanf("%d",&arrayf[i]);  // frequency of origination// time after which next train originates from station
		}
		
		
		time+=arrayx[0]+arrayl[0];/// the time taken by first journey.....
				
		for(i=1;i<n;i++)
		{
			if(time==arrayx[i])
			time+=arrayf[i];
			
			else 
			if(time<arrayx[i])
			{   
			     temp=arrayx[i]-time;
				time+=temp+arrayf[i];
			}
			else
			
			if(time>arrayx[i])
			{
				temp=fetch(arrayx[i],arrayf[i],time);
				temp1=temp-time;
				time=temp1+arrayf[i];
			     
			}
			
			
		}	
		
		printf("%d\n",time);
		
		
	}
}

int fetch(int origin,int freq,int reach)
{
	while(origin<reach)
	{
		origin=origin+freq;
		
	}
	return origin;
	
}
