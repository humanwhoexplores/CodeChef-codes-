#include<stdio.h>
#include<string.h>

#define gc getchar()
int hash[125];

int main()
{
	int T,N,i,flag; char name[40005];
	scanf("%d",&T);
	ch=gc;
	
	while(T--)
	{ flag=1;
		for(i=97;i<=122;i++)
		    hash[i]=0;
	      /*while((ch=gc)!='\0')
		  {     hash[ch]++;}
		   */
		     gets(name);
		   //scanf("%s",name);
		    len=strlen(name);
		   for(i=0;i<len;i++)    
		    {
		    	temp=name[i];
		    	hash[temp]++;
		    	
		    }
		  ch=gc;
		  //while((ch=gc)!='\0')
	       //    {hash[ch]++;}
	           gets(name);
			 //scanf("%s",name);
		     len=strlen(name);
		    for(i=0;i<len;i++)    
		     {
		    	temp=name[i];
		    	hash[temp]++;
		    	
		     }
		     
	      //ch=gc;
		  
		  scanf("%d",&N);     
		  
		  for(i=0;i<N&& flag==1;i++)
		  {
		  /*	while(((ch=gc)!='\0') && flag==1)
		      {
		          if(hash[ch]==0)
				    {
				      flag=-1;
					break; 
			         }
		      }*/
		      gets(name);
		       //scanf("%s",name);
		     len=strlen(name);
		    for(i=0;i<len;i++)    
		    {
		    	temp=name[i];
		    	if(hash[temp]==0)
                      flag=-1;
				else
				hash[temp]--;	  		    	
		    }
		  
		      
		  	  //ch=gc;
		  	
		  }
		       
		  if(flag==1)
		   printf("YES\n");
		   if(flag==-1)
		   printf("NO\n");	
		  	
		  	   
		   
		
		
	}
	
	
	
	return 0;
}
