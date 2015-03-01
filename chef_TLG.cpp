#include<stdio.h>

int abs(int n)
{
	if(n>=0)
	return n;
	return -n;
	
	
}
inline int fastint()
{
register int num=0;
char c=getchar_unlocked();
while(!(c>='0' && c<='9'))
c=getchar_unlocked();
while(c>='0' && c<='9')
{
num=(num<<3)+(num<<1)+c-'0';
c=getchar_unlocked();
}
return num;
}


int main()
{
	register int N,temp1,temp2; int i,array1[100000],array2[100000],lead[100000],max,player;
   	N=fastint();
    array1[0]=fastint();
    array2[0]=fastint();
    for(i=1;i<N;i++)
    {
    	temp1=fastint();
    	temp2=fastint();
    	array1[i]=temp1+array1[i-1];
    	array2[i]=temp2+array2[i-1];
    }
	
	
	for(i=0;i<N;i++)
	 {
	 	
	 	lead[i]=array1[i]-array2[i];
	 }
	max=abs(lead[0]);
	if(lead[0]>=0)
	 player=1;
	 else
	 player=2;
	
	for(i=0;i<N;i++)
	{
	   if(max<abs(lead[i]))
	   {
	   	max=abs(lead[i]);
	   	if(lead[i]>=0)
	   	player=1;
	   	else 
	   	player=2;
	   }
		
	}
	printf("%d %d\n",player,max);
	return 0;
}
