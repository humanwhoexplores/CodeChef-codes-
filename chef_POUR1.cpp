#include<stdio.h>

int abs(int a)
{
	if(a>=0)
	 return a;
	return -a; 
}


int main()
{
	int T,a,b,c;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&a,&b,&c);
		
		/*if(a<c && b<c)
		  {
		  	printf("-1\n");  continue;
		  }
		
		if(a==c || b==c)
		 {
		 	printf("1\n"); continue;
		 }
		 
		 if(a==b && a!=c)
		 {
		 	 printf("-1\n"); continue;
   		 }
         
         
         if(abs(a-b)!=c)
           {
           printf("-1\n");  continue;
		   }
		if(abs(a-b)==c)
		 {
		 	printf("2\n"); continue;
		 }	  	 
		*/
		
		if(c==0)
		{
			printf("0\n");
			
		}
		
		if(a==c || b==c)
		  {
		   printf("1\n"); continue;
	      }
		
		if(abs(b-a)==c)
		 {
		 	printf("2\n"); continue;
		 }
		 
		else
		{
			printf("-1\n"); continue;
		}
		
		
		
		
		
	}
	
	return 0;
	
}
