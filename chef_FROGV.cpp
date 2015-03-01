#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int N,K,P,*array,i,temp1,temp2,temp3;
	scanf("%d%d%d",&N,&K,&P);
	array=(int *)malloc(sizeof(int)*N);
	
      	for(i=0;i<N;i++)
      	  scanf("%d",&array[i]);
      	  
      	  for(i=0;i<K;i++)
      	  {
      	  
      	  scanf("%d",&temp1);
      	  scanf("%d",&temp2);
      	  temp3=temp2-temp1;
      	  temp3=abs(temp3);
      	  if(temp3<K)
      	      printf("Yes\n");
      	  else
      	  if(temp3>=K)
			printf("No\n");
        }
}
