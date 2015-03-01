
#include<stdio.h>




#define gc getchar
#define pc putchar

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
	int T,x1,y1,x2,y2,x3,y3,x4,y4,area;
	T=scan();
	while(T--)
	{   area=0; 
		x1=scan();y1=scan();
		x2=scan();y2=scan();
		x3=scan();y3=scan();
		x4=scan();y4=scan();
		
		area+=(x2-x1)*(y2-y1);
		if(x3>=x2 && y3>=y2)
		{
			area+=(x4-x3)*(y4-y3);
			
			
		}			
		if(x4<=x2 && y4<=y2)
		{
			area+=0;
		}
		
		if((x3<=x2 && y3<=y2)&&(x4>=x2 && y4>=y2))
		{
			area+=(x4-x3)*(y4-y3)-(x2-x3)*(y2-y3);
			
		}
		if((x3>=x1 && y3<=y1)&&(y4>=y2 && x4>=x2))
		 {
		 	area+=(x4-x3)*(y4-y3)-(y2-y1)*(x4-x3);
		 }
		if((x3<=x2 && y3<=y1)&&(x4>=x2 &&y4>=y2))
		{
			area+=(x4-x3)*(y4-y3)-(x2-x3)*(y1-y2);
		}
		if((x3<=x2 && y3<=y2)&&(x4>=x2 && y4<=y2))
		{
			area+=(x4-x3)*(y4-y3)-(x3-x2)*(y4-y3);
		}
		print(area);
		printf("\n");
	}
	
	return 0;
}
