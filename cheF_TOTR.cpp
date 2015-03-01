#include<stdio.h>
#include<string.h>

int main()
{
	
	int T,i,len;
	char totr[27],array[101],table[125];
	scanf("%d%s",&T,totr);
	for(i=0;i<26;i++)
	  {
	  	table[97+i]=totr[i];
	  	table[65+i]=totr[i]-32;
	  }
	//scanf("%s",totr);
	while(T--)
	{
		scanf("%d%s",&T,array);
		  len=strlen(array);
		 for(i=0;i<len;i++)
		 {
		 	if((array[i]>=97 && array[i]<=122) ||  (array[i]>=65 && array[i]<=90))
		 	   printf("%c",table[array[i]]);
		 	else
			 if(array[i]==' ')
			   printf("_");
			 else
			 printf("%c",array[i]);
			      
		 }
		
		
		printf("\n");
		
	}
	
	
	
	return 0;
}
