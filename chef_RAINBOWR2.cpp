#include<iostream>
#include<math.h>

using namespace std;

unsigned long long calculate(int,int);


int main()
{
	int N,size,places1,places2,temp1,temp2,temp3; unsigned long long sum=0;
	cin>>N;
     while(N>0){
     
      if(N<13)
       cout<<"0\n";

    if(N==13 || N==14)
       cout<<"1\n";
    
	else if(N>14)
	{
	   sum=0;
	if(N%2==0)
	    size=N/2;
	if(N%2!=0)
	    size=N/2+1;
	places1=size-7; //  places are the ones free after filling essential items 1-7 once
	places2=0;
	int counter=0;
    while(places1>0)
	{   //cout<<"\n places1 =="<<places1<<"\n places2======"<<places2; 
	    if(places2>0)
   		     sum+=calculate(places1,places2);
	   if(places2==0)
	       sum+=7;	
         
		//counter+=1;cout<<"\n counter of while loop================= is"<<counter<<"\n";  
		  places1-=1;places2+=1;
	sum=sum%1000000007;	  	
	}		
		
	cout<<sum<<"\n";	   	
    }
    cin>>N;	
   }
}

unsigned long long calculate(int place1,int place2)
{
	unsigned long long ans;
     //  the first case when all are occupied  places occupied by one number
	
	
	ans=7*pow(6,place2);
	return ans;
	
	
	
		
	
}
