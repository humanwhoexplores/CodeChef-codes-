#include<sidio.h>
using namespace std;

int check(int,int);

int main()
{
	int size,*x,*y,x_co,y_co,i,*what;
	
	scanf("%d",&size);
	x=new int[size];
	y=new int[size];
	what=new int[size];
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		
	  what[i]=check(x[i],y[i]);
	}
	
	
	
}

int check(int x_co,int y_co)
{
	int temp_x_co,temp_y_co;
    temp_x_co=x_co;
    temp_y_co-y_co;
 if(temp_x_co<0)
 
 	temp_x_co=temp_x_co*-1;
 
if(temp_y_co<0)	
  
  temp_y_co=temp_y_co*-1;
    
  

}
