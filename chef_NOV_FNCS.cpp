#include<iostream>
#include<stdio.h>
using namespace std;

# define gc getchar_unlocked 
 
/*inline int scan()
{
	register int n=0,c = gc();
	while(c<48 || c>57)c=gc();
	while(c>47 && c<58)n=(n<<1)+(n<<3)+c-48,c=gc();
	return n;
}*/



int main()
{
	int N,i=0,j=0,tempx,tempy,Q,cond,varx,vary; //long long *asum,*func,*allfunc;
	scanf("%d",&N);
	long long array[N];
	long long asum[N];
	long long func[N];
	long long allfunc[N];
	
	for(i=0;i<N;i++)
	  {
	  	scanf("%lld",&array[i]);
	  	if(i==0)
	  	  asum[i]=array[i];
	  	if(i>0)
	  	{
	  	  asum[i]=asum[i-1]+array[i];    //   calculates sum of consecutive elements life 1,,1+2,,1+2+3,,,,,1+2+3+4
		}
	  	
                		    
	  	
	  }
	
      for(i=0;i<N;i++)
	   {
	   	       //  this calculates functions
	   	scanf("%d%d",&tempx,&tempy);
	   	 
	   	 if(tempx>=2)
	   	 {
	   	 
	   	 func[i]=asum[tempy-1]-asum[tempx-2];
	     }
	   	 
	   	 
	   	 if(tempx==1)
	   	 {
	   	 	func[i]=asum[tempy-1];
	   	 }
	   	 
       }
       
       
	   for(i=0;i<N;i++)
	    {     /*  calculates sum of functions fron x to y */
	    	if(i==0)
	    	  allfunc[i]=func[i];
	    	if(i>=1)
			allfunc[i]=func[i]+allfunc[i-1];  
	    	  
	    }
	   scanf("%d",&Q);
	   while(Q--)
	   {
	   scanf("%d%d%d",&cond,&varx,&vary);
	       if(cond==1)
		   {
		   	
		   	for(j=varx-1;j<N;j++)
		   	 {  
		   	 	allfunc[j]+=(j-varx-2)*(vary-array[varx-1]);
		   	 }
		   	
		   	
		   	
		   }  
	       
	       if(cond==2)
	       {
	       	if(varx>1)
	       	 printf("%lld\n",allfunc[vary-1]-allfunc[varx-2]);
	       	 if(varx==1)
	       	   printf("%lld\n",allfunc[vary-1]);
	       }  
	     
	   	
	   }
	   
	   
}

