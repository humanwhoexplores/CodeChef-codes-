#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


class timer {
	private:
		unsigned long begTime;
	public:
		void start() {
			begTime = clock();
		}

		unsigned long elapsedTime() {
			return ((unsigned long) clock() - begTime) ;
		}

		/*bool isTimeout(unsigned long seconds) {
			return seconds >= elapsedTime();
		}*/
};



int main()
{
	int T,j=0;  long long num,i,array[10000];
	 timer t;
	cin>>T;
	
	
	while(T--)
	{
		
		scanf("%lld",&num);
		i=2;
		for(i=2;i<=num/2;i++)
		{
		
		while(num%i==0)
		{
			num=num/i;
			printf("%lld\n",i);
			array[j]=i;j++;
			//t=clock()-t;
			//cout<<"\n time=====\n"<<t;
			if(t.elapsedTime()>=2.88)
			  exit(0);
			
		}
	    }
		if(j>2)
		{
			for(int k=0;k<j-1;j++)
			{
				for(int g=k+1;g<j;g++)
				{
				
				
				long long temp=array[k]*array[g];
				
				if(t.elapsedTime()>=2.88)
				   exit(0);
			
			     }
			 }
		}
		
	    
	    
	    
		
	}
	
    
	
	
}
