#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
using namespace std;

int prime(int);


int main()
{
	
	int T,x,y,i,j,n,ans;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&x);
		scanf("%d",&y);
	
	
     
     n=x+y;
     
    ans=prime(n);
    

   	printf("%d",ans);
	}
	
}

int prime(int n)
{
int n1=n+1;
int h,status=1;
while(n1%2!=0)
{

link1:
	n1++;
for(h=3;h<=n1,n1%2!=0;h+=2)
{

if((n1)%h!=0)
continue;
else 
goto link1;	

}
int ans=n1-n;
return ans;
}



}
