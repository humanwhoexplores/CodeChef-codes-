#include<iostream>

using namespace std;
/* 
     for complete    explanation refer to my self made notes for this technique
	 
*/  


int main()
{
	int t,i,n,z,k,temp,max,array[1050]; int XOR[30002];
	cin>>t;
	while(t--)
	{   
	   for(i=0;i<=12000;i++)
	   {
	   	  XOR[i]=-1;
	   }
	
		cin>>n>>k;
		XOR[0]=1;
		
	     for(i=0;i<n;i++)
	     {
	     	cin>>array[i];
	     	XOR[array[i]]++;
	     }
		
		 
			
		  for(z=0;z<n;z++)
		  {
		   	
		  
		  
		  for(i=0;i<=12000;i++)
		  {
		  	   if(XOR[i]>-1)
		  	      {   
                      temp=i^array[z];
					  XOR[temp]+=1;    		  	      	
		  	      }
		  	
		  }
		  
		  	
	      }
		  	
		  	
			
		   
		    	
			
		
		
		
		
		max=0;
		for(i=0;i<=12000;i++)
		{
			if(XOR[i]>-1)
			{   temp=i;
				temp=temp^k;
				if(temp>max)
				  max=temp;
			}
			
		}
		
      cout<<max<<"\n";		
	}
	
	
	
	
}
