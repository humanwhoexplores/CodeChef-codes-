/* theory: If (x1,y1) and (x2,y2) are the vertices of diagonal of a square. Then other two vertices are given by
(x1+y1+x2-y2)/2,(-x1+y1+x2+y2)/2 and (x1-y1+x2+y2)/2,(x1+y1-x2+y2)/2   */
#include<iostream> 
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<utility>
 
 
 
 
 
 
 
typedef std::pair<int, int> int_pair__;
typedef std::vector<int_pair__> int_vec__;
typedef int_vec__::iterator int_vec_iter__;
 
 
 
bool sortby (const std::pair<int,int> & struct1,const std::pair<int,int> & struct2)
 
{
 return( struct1.first < struct2.first);
}
 
 
	
 
 
 
int main()
{
 
int n,i,j,k,z,flag1,flag2,a,b,c,d,x[2000],y[2000],temp1,ans,what1,what2;
 
   
	int_vec__ vec;
        ans=4;
	scanf ("%d", &n);
    
    
	
	
	for(i=0; i<n; i++)
		{  
		
		 scanf("%d%d",&what1,&what2);
		  what1=x[i];what2=y[i];
		  what2=what2*2;what1*=2;
         vec.push_back(std::make_pair(what1,what2));
		 
		 
		 
		}
      if(n==0)
       printf("4\n");
       if(n==1)
         printf("3\n");
       if(n==2)
	     printf("2\n");
		if(n>2)
		{
		  
	        sort(vec.begin(),vec.end(),sortby);
	        
	        
	    for(i=0; i<n-1 && ans>0; i++)
		{
		
		   for(j=(i+1); j<n && ans>0; j++)
			{
			flag1=0; flag2=0;
			a=(x[i]+y[i]+x[j]-y[j]);
			b=(-x[i]+y[i]+x[j]+y[j]);
			c=(x[i]-y[i]+x[j]+y[j]);
			d=(x[i]+y[i]-x[j]+y[j]);
			
					
			/*a=(vec[i].first+vec[i].second+vec[j].first-vec[j].second)/2;
			b=(-vec[i].first+vec[i].second+vec[j].first+vec[j].second)/2;
			c=(vec[i].first-vec[i].second+vec[j].first+vec[j].second)/2;
			d=(vec[i].first+vec[i].second-vec[j].first+vec[j].second)/2;
			*/
			
			
			
			
			  
			  /*int_vec_iter__ iter =  std::find(vec.begin(), vec.end(), std::make_pair(a,b));
                  if(iter != vec.end())
                    flag1=1;
                    else
                     flag1=0;
			   
			   
			 
			     iter =  std::find(vec.begin(), vec.end(), std::make_pair(c,d));
                  if(iter != vec.end())
                    flag2=1;
                    else
                     flag2=0;
			   */
			   
			   if (std::binary_search (vec.begin(), vec.end(), std::make_pair(a,b)))
                     flag1=1; 
                     else 
                     flag1=0;
			   
			   if (std::binary_search (vec.begin(), vec.end(), std::make_pair(c,d)))
                     flag2=1; 
                     else 
                     flag2=0;
			   
			   
			   
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
