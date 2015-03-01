#include<stdio.h>

# define gc getchar_unlocked


#define pc putchar_unlocked

void print(int n)
{
    char num[20];
    register int i=0;
    do
    {
        num[i++]=n%10+'0';
        n/=10;
    }while(n);
    i--;
    while(i>=0)
        pc(num[i--]);
    pc('\n');
}





inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}



int main()
{
	int T,N,x,y,sumx,sumy;
	
	T=scan();
	while(T--)
	{   sumx=0; sumy=0;
		N=scan();
		while(N--)
		{
			x=scan();
			sumx+=x;
			y=scan();
			sumy+=y;
			
		}
		
		print(sumx-sumy);
		
	}
	
	
	return 0;
}
