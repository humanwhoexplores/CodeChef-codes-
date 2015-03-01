#include<iostream>
#include<cmath>
using namespace std;

void FIB(int);

int main()
{   int num,i,size;
    cin>>size; 
    
    for(i=0;i<size;i++)
    {
    	cin>>num;
    	
    	
        	   FIB(num);
    	   

    }
}

void FIB(int n)
{
    float q1,q2;
	q1=sqrt(5*pow(n,2)+4);
	q2=sqrt(5*pow(n,2)-4);
	int t1,t2;
	t1=(int) q1; t2=(int) q2;
	if((q1-t1)==0.0||(q2-t2)==0.0)
	  cout<<"YES\n";
	  else
	  cout<<"NO\n";	
	
}
