#include<stdio.h>

using namespace std;

int data;

int sort[1000001];
 
int main()
{
int n,i,j,count;
scanf("%d",&n);
//scanf("%d",&size);

   for(i=0;i<n;i++)
   {
   	scanf("%d",&data);
   	sort[data]++;
   	
   }
   i=1;
   while(i<=1000000)
   //for(i=1;i<=n;i++)
   { if(sort[i]!=0)  
   	{
   	for(count=0;count<sort[i];count++)	
   	   { 
   	  
   	   printf("%d",i);
        //	sort[data]++;
       printf("\n"); 
       }
   }
   i++;
   }
   
   	
}
