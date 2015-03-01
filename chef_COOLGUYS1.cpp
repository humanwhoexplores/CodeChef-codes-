#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


long long gcd(long long a,long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
	    
	
} 

int main()
{
	int T,num,root,i;long long total,sum,gc,temp1;
	cin>>T;
	while(T--)
	{   temp1=0;
		cin>>num;
		total=num*num;
		root=sqrt(num);
		for(i=1;i<=root;i++)
		    temp1=temp1+(num/i);
	
	sum=2*temp1-root*root;


	 		gc=gcd(total,sum);
			total=total/gc;sum=sum/gc;
		
		
		//printf("%lld/%lld\n",sum,total);
        //cout<<sum<<"/"<<total<<"\n";
			
			
			
		
		
			
		
    }
    
    
}
