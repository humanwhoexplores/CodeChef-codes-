#include<iostream>

using namespace std;
/* 
     for complete    explanation refer to my self made notes for this technique
	 
*/  
     
     
     
     
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}

int main()
{
	int t,i,n,num; long long div[10002];
	cin>>t;
	while(t--)
	{   for(i=0;i<10002;i++)
	        div[i]=0;
		cin>>n;
		div[0]=1;
		while(n--)
		{
			
		  cin>>num;
		  
		  for(i=1;i<=10000;i++)
		  {
		  	   if(div[i])
		  	      {
                    div[gcd(i,num)]+=div[i];    		  	      	
		  	      }
		  	
		  }
		  
		  	div[num]+=div[0];
		  	
		  	
		  	
			
		   
		    	
			
		}
		
		cout<<div[1]<<"\n";
		
		
		
	}
	
	
	
	
}
