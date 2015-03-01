#include<stdio.h>
#include<string.h>
int main()
{
	char array[101],ch;int i,len;
	//scanf("%s",array);
	//gets(array);
	//std::cin>>array;
//	len=strlen(array);
  while((ch=getchar())!='\0')
  {
  	
  	if(ch=='z')
	  ch=getchar();     
  	else
  	printf("%c",ch);
  }
  
    /*for(i=0;i<len;)
	   {
	   	   if(array[i]>=97 && array[i]<=122)
	   	   {
	   	   	if(array[i]=='z')
	   	   	{
	   	   		i+=2;
	   	   		
	   	   	}
	   	   
			else if(array[i]!='z')
			{
				printf("%c",array[i]);
			   i++;
			}  
			else i++;  
			  
		   }
	   	
	   }*/	

     printf("\n");


	return 0;
}
