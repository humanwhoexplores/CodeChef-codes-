#include<stdio.h>
#include<math.h>
 
 
 long long temp[3100000];
 
int main()
{
int  T,N,K,i,j,z,count; long long sum,add,ans,array[200],rajnikanth,pivot;
scanf("%d",&T);
while(T--)
{   sum=0;z=0;  count=0;add=0;
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++)
	 {
	     scanf("%lld",&array[i]);
	 }
	for(i=0;i<N;i++)
	{
		sum=sum+array[i];
 
	}
    if(sum==0)
    {
    	if(N<K)
    	printf("yes\n");
    else
    printf("no\n");
    }
    if(sum<K)
     printf("no\n");
      
	if( sum>0 &&sum%K!=0 && sum>=K)    // these are just basic conditions to check
 	printf("no\n");
	if(sum>0 && sum%K==0 && sum>=K)
	{
 
 
 
 
 
 
 
        for(i=1;i<pow(2,N);i++)   ///   i=0 IS THE NULL SET
        {   
         	add=0;
           for(j=0;j<N;j++)
           {
 
           	if((i & (1<<j))!=0)
           	    add+=array[j];
                //  calculating all subsets like in paying up method
           }  
           if(add==sum/K)
           {
           	temp[z]=i;        //    if a set is like  1010  then it is  8 + 0 +  2  +  0 ==10  1010 represent first and third included
           	z++;              //        10 represents the set 1010
           }
 
		}                        //   if 1,3  sanskar are given to follower x  we cant give 1 4 to follower y.  1 is already given 
             //   check when z ==1   
         pivot=temp[0];  count=1;
		for(i=1;i<z;i++)
		{
			if((temp[i] & pivot)==0)     //   from above if  AND of two numbers is 0 then   those sets can be included ex 1010 & 0101 =0    
			                                //   first and third ele  come in first set  ;;;  second and fourth in second set
			{
				count++;
				pivot=pivot | temp[i];
			}
 
			if((temp[i] & pivot)!=0)      //   if and of two sets   !=0   means one element in two sets  ;;
			                                //  that set cant be included
			  continue;
 
 
 
		}	  
 
 
 
		if(count==K)
		printf("yes\n");
		if(count<K)
		printf("no\n");
 
 
	}
 
 
 
 
}
 
 
 
	return 0;
}    
