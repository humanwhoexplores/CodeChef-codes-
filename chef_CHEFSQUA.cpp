/* theory: If (x1,y1) and (x2,y2) are the vertices of diagonal of a square. Then other two vertices are given by
(x1+y1+x2-y2)/2,(-x1+y1+x2+y2)/2 and (x1-y1+x2+y2)/2,(x1+y1-x2+y2)/2   */
#include<iostream> 
#include<stdio.h>     //    check chef_CHEFSQUA2 	for correct solution
#include<algorithm>
using namespace std;


struct hello
{
   int xco;
   int yco;
   void getdist()
   {
   	scanf("%d",&xco);
   	scanf("%d",&yco);
   	
   	
   	
   }	
};

hello obj[2000];

bool sortby (const hello &struct1,const hello& struct2)
 
{
 return( struct1.xco < struct2.yco);
}
 

int bsearch(int item1,int item2,int size)
{
	int mid,beg,end;
	beg=0; 
	end=size-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(item1==obj[mid].xco && item2==obj[mid].yco)
		   return 1;
		if(item1<obj[mid].xco)
		 end=mid-1;
		if(item1>obj[mid].yco)
		 beg=mid+1;
	}
	
	return 0;
}



int main()
{
 
int n,i,j,k,z,flag1,flag2,a,b,c,d,x[2000],y[2000],temp1,ans,what1,what2,what3,what4;
 //hello obj[2000];
   
	
        ans=4;
	scanf ("%d", &n);
    
    
	
	
	for(i=0; i<n; i++)
		{  
		//scanf ("%d", &x[i]); scanf ("%d", &y[i]);
		 obj[i].getdist();
		 
		}
      if(n==0)
       printf("4\n");
       if(n==1)
         printf("3\n");
       if(n==2)
	     printf("2\n");
		if(n>2)
		{
		   
		   sort(obj,obj+n;sortby);
		   
	     
	    for(i=0; i<n && ans>0; i++)
		{
		
		   for(j=(i+1); j<n && ans>0; j++)
			{
			flag1=0; flag2=0;
			a=(obj[i].xco+obj[i].yco+obj[j].xco-obj[j].yco)/2;
			b=(-obj[i].xco+obj[i].yco+obj[j].xco+obj[j].yco)/2;
			c=(obj[i].xco-obj[i].yco+obj[j].xco+obj[j].yco)/2;
			d=(obj[i].xco+obj[i].yco-obj[j].xco+obj[j].yco)/2;
			
			/*for(k=0; k<n; k++)
				{
					
				if((a==x[k]*2)&&(b==y[k]*2))
					
					flag1=1;  
				    
				if((c==x[k]*2)&&(d==y[k]*2))
					flag2=1;
				    
				  if(flag1==1 && flag2==1)
				   break;		
				}*/
			//	what1=(a,n);what2=(b,n);
			//	what3=(c,n);what4=(d,n);
				
			
				
					
			/*	if(what1==1 && what2==1)
					
					flag1=1;  
				    
				if(what3==1 && what4==1)
					flag2=1;
			*/	    
			flag1=(a,b,n);
			flag2=(c,d,n);			
				
			   
			   
			   
			    if(flag1==1 && flag2==1)
			       temp1=0;
			    
				if(flag1==1 && flag2==0)
				   temp1=1;   
		 	    if(flag1==0 && flag2==1)
				   temp1=1;   
			      if(flag1==0 && flag2==0)
                        temp1=2;
			if(temp1<ans)
			  ans=temp1;
			  
			    
			
			}
	    
		}    
	
	
	   
	      
	
	   
	    printf("%d\n",ans);
	
       }
 
 
 
return 0;
} 
