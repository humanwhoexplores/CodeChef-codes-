#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{    
int  T,N,M,H,A,B,IND,i,array[3],*D;float ans,temp,temp2;
	scanf("%d",&T);
	while(T--)
	{  i=0;ans=0;
		scanf("%d",&H);
		scanf("%d",&N);scanf("%d",&M);
		scanf("%d",&A);scanf("%d",&B);scanf("%d",&IND);
		D=new int[M];
		for(i=0;i<M;i++)
		   scanf("%d",&D[i]);
		   
		
	    //   W equals X(n-1)
		
		
		array[0]=0;
		i=0;
		while(i<N/2)
		{  //cout<<"\n inwhile lop";
			array[1]=array[0]+D[IND];
			IND=(A*IND +B)%M;
			
			array[2]=array[1]+D[IND];
			IND=(A*IND +B) % M;
			temp=array[2]-array[0];
			//cout<<"\n temp =="<<temp;
			//cout<<"\n h === "<<H;
			temp2=temp*H;
			ans+=temp2/2;
			//cout<<"\n the answer is"<<ans;
			array[0]=array[2];
		   i++;	
		}
		//temp=arr	
			
	   printf("%d\n",ans);
	   		
			
		
			
		
		
	}
	
	
	
}
