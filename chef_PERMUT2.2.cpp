#include<stdio.h>

int value[100001];


int main()
{  
   
   int n,i;int array[100000],flag;
   scanf("%d",&n);
   while(n>0)
   {
   flag=5;
   
   for(i=1;i<=n;i++)
      value[i]=0;
   for(i=0;i<n;i++)
   {  
   	scanf("%d",&array[i]);
   	value[array[i]]=i+1;
   }
   	
  for(i=0;i<n && flag!=-1;i++)
  {
  	if(array[i]==value[i+1])
  	    {
  	    continue;}
  	 else 
	   {
	   flag=-1;}   
  }
  
  if(flag==-1)
     printf("not ambiguous\n");
	 else if(flag==5)
	 printf("ambiguous\n");
	 	
	 	scanf("%d",&n);
	 	
    }
}
