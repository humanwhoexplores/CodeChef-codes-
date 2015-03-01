#include<iostream>
#include<stdio.h>
using namespace std;

int array1[35],array2[35];


int main()
{
	int Q,ans,x,y,len1,len2,red,black,tempx,tempy,n,i,j,status,hash1,hash2,count; char ar[10];
	cin>>Q;
	while(Q--)
	{   status=1; ans=0;
		
		scanf("%s",ar);
		if(ar[1]=='i')
		   status*=-1;
		   
		if(ar[1]=='b' || ar[1]=='r')
		{   i=0;j=0;
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
		len1=i;   //  length of the number 1 in bits also give level of number 1
		len2=j;   //   length of bits of number 2 ;;;; ;also give level of number 2
       		
		for(i=len1-1,j=len2-1;i>=0 && j>=0;i--,j--)
		   {
		   	  if(array1[i]!=array2[j])
		   	      break;
		   	      
		   	    else
				   
				  count++;   
		   }
           // count refers to number of bits which match
            
		   
		   hash1=len1-count;
		   hash2=len2-count;
		   ans=0;black=0;red=0;   
	       
           if (status==1)
           {
               if(count%2!=0)
                { 
                  black+=1;  //  this is for LCA
                 }
             if(count%2==0)
                 { red+=1;}
             if(len1%2!=0 && hash1%2!=0 )
             { 
               black+=1+hash1/2;   red+=hash1/2;
               }
             if(len1%2!=0 && hash1%2==0)
              {
               black+=hash1/2; red+=hash1/2;
              }
             if(len1%2==0 && hash1 %2!=0)
               {
                 black+=hash1/2;
                   red+=1+hash1/2;
                }
            if(len1%2==0 && hash1%2==0)
               {   red+=hash1/2; black +=hash2/2;}    
         
                    //   break toh banta hai
            if(len2%2!=0 && hash2%2!=0 )
             { 
               black+=1+hash2/2;   red+=hash2/2;
               }
             if(len2%2!=0 && hash2%2==0)
              {
               black+=hash2/2; red+=hash2/2;
              }
             if(len2%2==0 && hash2 %2!=0)
               {
                 black+=hash2/2;
                   red+=1+hash2/2;
                }
            if(len2%2==0 && hash2%2==0)
               {   red+=hash2/2; black +=hash2/2;}    
         


                }
            
	       


               if (status==-1)
           {
               if(count%2!=0)
                { 
                  red+=1;  //  this is for LCA
                 }
             if(count%2==0)
                 { black+=1;}
             if(len1%2!=0 && hash1%2!=0 )
             { 
               red+=1+hash1/2;   black+=hash1/2;
               }
             if(len1%2!=0 && hash1%2==0)
              {
               red+=hash1/2; black+=hash1/2;
              }
             if(len1%2==0 && hash1 %2!=0)
               {
                 red+=hash1/2;
                   black+=1+hash1/2;
                }
            if(len1%2==0 && hash1%2==0)
               {   black+=hash1/2; red +=hash2/2;}    
         
                    //   tukur tukur kahe dekh rahe ho
            if(len2%2!=0 && hash2%2!=0 )
             { 
               red+=1+hash2/2;   black+=hash2/2;
               }
             if(len2%2!=0 && hash2%2==0)
              {
               red+=hash2/2; black+=hash2/2;
              }
             if(len2%2==0 && hash2 %2!=0)
               {
                 red+=hash2/2;
                   black+=1+hash2/2;
                }
            if(len2%2==0 && hash2%2==0)
               {   black+=hash2/2; red +=hash2/2;}    
         

            if(ar[1]=='r')
             cout<<red<<"\n";
            if(ar[1]=='b')
              cout<<black<<"\n";   
            
                }
            
	        
	    











 
	    
		
         }   
		
		
		
		
	}
	
	
	return 0;
}
