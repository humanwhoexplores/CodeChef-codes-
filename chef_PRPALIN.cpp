#include<stdio.h>
#include<cmath>
#include<cstdlib>

int data[10000000]; 

int prime(int);

int main()
{
	int N,num,start=1,status,i,limit;
	scanf("%d",&N);
	link1:
	{
	num=N;
	start=1;
	status=prime(N);
	if(status==1)
	{
	
	while(num!=0)
	{   
		data[start]=num%10;
		num=num/10;
		start++;
		
	}
	limit=start/2;
	
	for(i=1;i<=limit,start>limit;i++,start--)
	{
		if(data[i]==data[start])
		{
			continue;
		}
		else 
		{
			N++;
			goto link1;
		}
		
	}
	printf("%d",N);
    exit(0);
	}
    else
	if(status==0)
	{
		goto link1;
	}     
	//status=prime(N);
	/*if(status==1)
	{
	printf("%d\n",N);
	exit(0);
	}else
	goto link1;
    }*/
	
    }
   
}

int prime(int n)
{
int h;
if(n==2)
return 1;

if(n%2==0)
return 0;


for(h=3;h<sqrt(n);h+=2)
{
	if(n%h==0)
	return 0;
	
	else 
    continue;

}
return 1;

	
}
