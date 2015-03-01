#include<stdio.h>
 
int checkint1(int a)
{
	
	float lim1=(a)*8.1;
	int lim2=(int)lim1;
 
	if((lim1-lim2)==0.0)
 
	  return lim2;
	  return lim2+1;
	
	
}
 
int checkint2(int a)
{
	
	float lim1=(a-1)*0.9;
	int lim2=(int)lim1;
 
	if((lim1-lim2)==0.0)
 
	  return lim2;
	  return lim2+1;
	
	
}
 
 
 
int main()
{
	int T,N,flag,array[10000],limit,i,temp,zeroes,temp1,temp2;
	 long long sum=0;
	 
	 scanf("%d",&T);
	 while(T--)
	 {  sum=0; flag=1; zeroes=0;
	 	scanf("%d",&N);
	 	
	 	for(i=0;i<N;i++)
	 	   {
	 	   	  scanf("%d",&array[i]);
	 	   	  sum+=array[i];
	 	   	  if(array[i]>100)
	 	   	   flag=-1;
	 	   	   if(array[i]==0)
	 	   	   zeroes++;
	 	   }
	 	   temp1=checkint1(N-zeroes);
	 	    temp2=checkint2(N-zeroes);
	 	    if(N<=100)
	 	      limit=temp2;
	 	    else
			 limit=temp1;  
	 	  if(sum>=100 && sum<=(100+limit) && flag==1)
	 	  printf("YES\n");
	 	  if(sum<100 || sum>(100+limit) || flag==-1)
	 	  printf("NO\n");
	 	
	 	
	 }
	
	
	return 0;
	
} 

