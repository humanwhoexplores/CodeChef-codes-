#include<iostream>
#include<stdio.h>
using namespace std;

int array1[35],array2[35];

void check(int a,int b);




int main()
{
	int Q,ans,x,y,len1,len2,tempx,tempy,n,i,j,status,hash1,hash2;char ar[3];
	cin>>Q;
	while(Q--)
	{   status=1; ans=0;
		
		scanf("%s",ar);
		if(ar[1]=='i')
		   status*=-1;
		   
		if(ar[1]=='b' || ar[1]=='r')
		{
			scanf("%d%d",&x,&y);
			tempx=x;
			tempy=y;
			
			
			n=1;
		while(tempx>0)
		{
			if(tempx & n)
			{
				array1[i]=1;
			}
			else
			array1[i]=0;
			
			i++;
			tempx=tempx>>1;
			
		}
		
		n=1;
		while(tempy>0)
		{
			if(tempy & n)
			{
				array2[j]=1;
			}
			else
			array2[j]=0;
			
			j++;
		    tempy=tempy>>1;
			
		}
		len1=i;
		len2=j;
		
		for(i=len1-1,j=len2-1;i>=0 && j>=0;i--,j--)
		   {
		   	  if(array1[i]!=array2[j])
		   	      break;
		   	      
		   	    else
				   
				  count++;   
		   }
		   
		   hash1=len1-count;
		   hash2=len2-count;
		   ans=0;
		   if(ar[1]=='b')
		   {
		   	 if(status==1)
		   	 {
		   	 
		   	if(hash1%2!=0)
		   	    {  
		   	       if(len1%2!=0)
		   	       {
		   	       	ans+=1+(hash1/2);
		   	       }
		   	 	   if(len1%2==0)
		   	 	     ans+=(hash1/2);
		   	     }
		   	     
		   	     if(hash1%2==0)
		   	     {
		   	     	ans+=(hash1)/2;
		   	     }
		   	     
		   	    	if(hash2%2!=0)
		   	      {  
		   	       if(len2%2!=0)
		   	       {
		   	       	ans+=1+(hash2/2);
		   	       }
		   	 	   if(len2%2==0)
		   	 	     ans+=(hash2/2);
		   	     }
		   	     
		   	     if(hash2%2==0)
		   	     {
		   	     	ans+=(hash2)/2;
		   	     }
		     
		   	}
              
			  
			  if(status==-1)
		   	 {
		   	 
		   	if(hash1%2!=0)
		   	    {  
		   	       if(len1%2==0)
		   	       {
		   	       	ans+=1+(hash1/2);
		   	       }
		   	 	   if(len1%2!=0)
		   	 	     ans+=(hash1/2);
		   	     }
		   	     
		   	     if(hash1%2==0)
		   	     {
		   	     	ans+=(hash1)/2;
		   	     }
		   	     
		   	    	if(hash2%2!=0)
		   	      {  
		   	       if(len2%2==0)
		   	       {
		   	       	ans+=1+(hash2/2);
		   	       }
		   	 	   if(len2%2!=0)
		   	 	     ans+=(hash2/2);
		   	     }
		   	     
		   	     if(hash2%2==0)
		   	     {
		   	     	ans+=(hash2)/2;
		   	     }
		     
		   	}
		   
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  		   
		   }   
	    
	
	    
		}   
		
		
		
		
	}
	
	
	return 0;
}
