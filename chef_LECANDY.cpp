#include<stdio.h>

using namespace std;

int main()
{
int n,i,j,N_ELE,CANDY,sum=0,g;       // N_ELE total no of elephants and CANDY total no of candies
   scanf("%d",&n);
for(j=0;j<n;j++)
{
   sum=0;
   scanf("%d",&N_ELE);
   scanf("%d",&CANDY);                               // sum represents the number of candies required

    
     for(i=0;i<N_ELE;i++)
     {     
     scanf("%d",&g);
     sum+=g;
     }
     if(sum<=CANDY)
     {
     	
     printf("Yes\n");
          }
     else
     {
     	printf("No\n");
     	
     }
 }
	
}
