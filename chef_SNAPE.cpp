#include<math.h>
#include<stdio.h>

int main()
{   int T;
	double min,max,LS,B,temp1,temp2,temp3;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lf",&B);scanf("%lf",&LS);
		
		temp1=pow(B,2);
		temp2=pow(LS,2);
		max=pow((temp1+temp2),0.5);
		min=pow((temp2-temp1),0.5);
		
		printf("%lf ",min); printf("%lf\n",max);
		
		
		
		
	}
	
	
	
}
