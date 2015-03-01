#include<stdio.h>
#include<stdlib.h> 
 int main()
 {
 	int T,temp,i;char ch; long long sum=0,total;
 	scanf("%d",&T);
 	total=(T)*(T+1);
 	total=total/2;
     while(T--)
 	{  
 		scanf("%lld",&temp);
 		sum+=temp;
 		
 	}
 	if(sum==total)
 	  printf("YES\n");
 	else if(sum!=total)
	    printf("NO\n");
		  
 	
 	return 0;
 }
