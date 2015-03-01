#include<iostream>
using namespace std;

int hob (int num)
{    /* this returns largest number which is power of 2 <=num*/
    if (!num)
    	return 0;

    int ret = 1;

    while (num >>= 1)
    	ret <<= 1;

    return ret;

}

int high (int num)
{
	if(!num)
	    return 0;
	
	
	
}

int main()
{
	
   int T,num;
   cin>>T;
   while(T--)
   {
   
   cin>>num;
	
 
    cout<<hob(num)<<"\n";	
   }
	
}
