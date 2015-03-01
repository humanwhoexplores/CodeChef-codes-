#include<iostream>
#include<cmath>
using namespace std;
int *x_co;
int *y_co;
int main()
{
int num,i;
double d;
cin>>num;
x_co=new int[num];
y_co=new int[num];

for( i=0;i<num;i++)
{
cin>>x_co[i]; cout<<" "; cin>>y_co[i];
}

for(i=0;i<num;i++)
{
if(abs(x_co[i])==abs(y_co[i]))                // both equal
    {
    d=2*abs(x_co[i]); goto link1;
    }
else    
if((x_co[i]%2!=0&&y_co[i]%2!=0)||(x_co[i]%2==0&&y_co[i]%2==0))          // both odd
{
	if(abs((x_co[i])>abs(y_co[i])))
	{
	d=2*abs(x_co[i]);
	 goto link1;
    }
else
   {
   d=2*abs(y_co[i]);
   goto link1;
}
}

else
{
	if(abs(x_co[i])>abs(y_co[i]))
	{
	d=2*abs(x_co[i])+1; 
	goto link1;
    }
	else
	{
	d=abs(2*y_co[i])-1; 
	goto link1;
    }
}
link1:
cout<<d<<"\n";
}	
}
