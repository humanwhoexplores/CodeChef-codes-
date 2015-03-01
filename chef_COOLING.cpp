#include<iostream>
#include<algorithm>
using namespace std;

//void sort(int a[],int n);
int main()
{
	int T,N,pie[31],weight[31],i,j,count=0,pivot1,pivot2;
	cin>>T;
	
	for(j=0;j<T;j++)
	{   count=0;
	     pivot1=pivot2=0;
		cin>>N;
		for(i=0;i<N;i++)
		  cin>>pie[i];
		 for(i=0;i<N;i++)
		   cin>>weight[i];
		sort(pie,pie+N);
		sort(weight,weight+N);
		
		 /*for(i=0;i<N;i++)
		   cout<<"pie=="<<pie[i]<<"\n";
		 for(i=0;i<N;i++)
		    cout<<"weight=="<<weight[i]<<"\n";*/  
		
		 while(pivot1<N&&pivot2<N)
		 {
		 	if(pie[pivot1]<=weight[pivot2])
		 	{
		 		count++;
		 		pivot1++;
		 		pivot2++;
		 	}
		 	else
		 	if(pie[pivot1]>weight[pivot2])
		 	{
		 		pivot2++;
		 	}
		 }    
		
		cout<<count<<"\n";
	}
}

/*void sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=(n-1)-i;j++)
		{
			if(a[i+1]<a[i])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}*/
