#include<stdio.h>
#include<cstring>
using namespace std;


int main()
{
	
char array[101];


int i,j,count,size,T;


scanf("%d",&T);



	for(j=0;j<T;j++)
	{
	

      gets(array);
	
    
    
    
    	
    

    
	
	
	for( i=0,count=0;i<strlen(array);i++)
	{
		  if((int)array[i]==65)
		  count+=1;
		  else if((int)array[i]==66)
		  count+=2;
		  else if((int)array[i]==68)
		  count+=1;
		  else if((int)array[i]==79)
		  count+=1;
		  else if((int)array[i]==80)
		  count+=1;
		  else if((int)array[i]==81)
		  count+=1;
		  else if((int)array[i]==82)
		  count+=1;
		  
    }
printf("%d\n",count);
}
return 0;
}
