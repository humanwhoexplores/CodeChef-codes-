#include<iostream>
using namespace std;
inline void optimal(int n)
{
	cout<<(n/2 +1)<<"\n";
}
int main()
{
	int *foo,i,size;
	cin>>size;
	foo=new int[size];
	for(i=0;i<size;i++)
	   cin>>foo[i];
	
    for(i=0;i<size;i++)
	     optimal(foo[i]);
		
	   
}
