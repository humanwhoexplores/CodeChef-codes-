#include<stdio.h>
#include<string.h>

int min(int a,int b)
{
	if(a<=b)
	return a;
	return b;
	
	
}
int main()
{
	int T,len,i,count1=0,count2=0;  char array[100001];
 	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",array);
		len=strlen(array);
		count1=0;count2=0;
		for(i=0;i<len;i++)
		 {
		 	//  setting first number -
		 	if(array[0]=='-')
		 	 continue;
		 	 
		 	 if(i%2!=0)
               {
               	if(array[i]=='+')
               	  continue;
               	  else
					 count1++;
					  
               }		 		
		 	if(i%2==0)
			 {
			 	if(array[i]=='-')
			 	  continue;
			 	 else
				  count1++; 
			 	  
			 	
			 }	
		
		 	
		 }
	
	     	for(i=0;i<len;i++)
		 {
		 	//  setting first number +
		 	if(array[0]=='+')
		 	 continue;
		 	 
		 	 if(i%2!=0)
               {
               	if(array[i]=='-')
               	  continue;
               	  else
					 count2++;
					  
               }		 		
		 	if(i%2==0)
			 {
			 	if(array[i]=='+')
			 	  continue;
			 	 else
				  count2++; 
			 	  
			 	
			 }	
		
		 	
		 }
	
	
	      printf("%d\n",min(count1,count2));
		
		
	}
	
	return 0;
}
