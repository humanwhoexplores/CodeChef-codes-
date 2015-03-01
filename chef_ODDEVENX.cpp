#include<stdio.h>
int abs(int a)
{
	if(a>=0)
	 return a; return -a;
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
   int n,i,counto=0,counte=0,ans;
       n=fastint();   int array[n];
	for(i=0;i<n;i++)
	  {
	  array[i]=fastint();
       if((array[i])&(1<<0))
	       counto++;
       else
        counte++;
        
	     
	     }
ans=abs(counto-counte);
printf("%d\n",ans);
	return 0;
}
