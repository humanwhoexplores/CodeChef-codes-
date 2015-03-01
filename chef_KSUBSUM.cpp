#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;

int sub_sum[500005];int array[10000];
//void asort(int [],int);

bool sortBy(int A,int B){
	return A>B;
}

int main()
{
	int T,N,i,j,K1,K2,K3,START=1,x,y,curr_sum=0;
	scanf("%d",&T);  // number of test cases
	for(j=0;j<T;j++)
	{
		START=1;
		scanf("%d",&N);     // number of elements
		scanf("%d",&K1);
		scanf("%d",&K2);
		scanf("%d",&K3);
		//array=new int[N];      // scan the contents of array
		for(i=0;i<N;i++)
		{
			scanf("%d",&array[i]);
			
		}
		
		
		
		for(x=0;x<N;x++)
		    {   
		    	for(y=x;y<N;y++)
		    	{
		    		curr_sum+=array[y];
		    	
		     sub_sum[START]=curr_sum;
		     //printf("%d ",sub_sum[START]);
		     START++;
		        
		     //printf("%d",curr_sum);printf("hello\n");
		        }
			 
			 curr_sum=0;
		     
			}
			//printf("\n");
			sort(sub_sum+1,sub_sum+START,sortBy);
			//asort(sub_sum,START);
		/*for(int index=1;index<START;index++)
		{
			printf("%d ",sub_sum[index]);
		}*/
		//printf("\n");
		printf("%d\n",sub_sum[K1]);
		printf("%d\n",sub_sum[K2]);
		printf("%d\n",sub_sum[K3]);
		
	}
	
}

/*void asort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=(n-1)-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}*/
