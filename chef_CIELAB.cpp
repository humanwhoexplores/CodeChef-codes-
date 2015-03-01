#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int A,B,diff,temp,temp2,diff2;
	scanf("%d",&A);
	scanf("%d",&B);
	diff=A-B;
	temp=(diff%10);
	{
		if (temp!=9)
         diff++;
         if(temp==9)
         diff--;
	}
	

	printf("%d\n",diff);
	
	
}
