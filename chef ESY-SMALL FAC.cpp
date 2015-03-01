#include<iostream>
int fac(int);
int main()                              //this is a code for small factorial problem of  codechef easy
{
	int size,num[100],ans;
	int i;
	std::cin>>size;
	for(i=0;i<size;i++)
	{ std::cin>>num[i];
    }
	
	for(i=0;i<size;i++)
	{
		
		ans=fac(num[i]);
		std::cout<<ans<<"\n";
		
	}
}
int fac(int n)
{
	int j,pro=1;
	for(j=1;j<=n;j++)
	{
	pro=pro*j;
    }
	return pro;
	
}
