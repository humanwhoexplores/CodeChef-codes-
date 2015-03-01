#include<stdio.h>
 
 
int gcd(int,int);
 
int main()
{
     
	 int T,N,i,j,k,max,check,array[100001];
	 scanf("%d",&T);
	 while(T--)
	 {  max=0;
	 	scanf("%d",&N);
	 	
	 	for(i=0;i<N;i++)
	 	   scanf("%d",&array[i]);
	 	   
	
		 		
 		 		 		
		 	    for(j=0;j<N-1;j++)
		 	    {
		 	    	check=gcd(array[j],array[j+1]);
		 	    	if(check==1) {  max=50; break;}
		 	    	//  this checks even for one pair gcd==1 
		 	    	// then for complete array gcd is 1
		 	    	//  
		 	    }
				 
		    		 	
		 		
		
		 		 	
		 	
		 	
		 	
		    
	 	//  -1 bcoz even for one pair gcd is not 1 
	 	if(max==0)
	 	printf("-1\n");
	 	else if(max==50)
	 	printf("%d\n",N);
	 	
	 }	
	
	return 0;
}
 
 
 
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
} 
