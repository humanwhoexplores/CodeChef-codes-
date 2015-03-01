#include<stdio.h>

int ans[100000],list[100000],ans2[100000],ans3[1000000];
int main()
{   // my approach first take common of  1 and 2,,,store the common....in ans[]
   // elements not common stored in list[] ..take common of it with list3,,store these common elements in ans2[]
	 // merge list1 and list2
	int list1[50000],list2[50000],list3[50000],N1,N2,N3,i,j,k,l,m,index=0,pivot=0,honey=0,singh=0,eminem=0;
	scanf("%d%d%d",&N1,&N2,&N3);
	
	for(i=0;i<N1;i++)                   //  list1 list2 list3 are initial lists
	   scanf("%d",&list1[i]);
	for(i=0;i<N2;i++)
	    scanf("%d",&list2[i]);
    for(i=0;i<N3;i++)
	    scanf("%d",&list3[i]);		   
	
	for(i=0,j=0;i<N1 && j<N2;)                     //// list consisits of those  present only in either list1 or list2 only
	{                                                //  ans[] present both in list1 ,list2
		if(list1[i]<list2[j])
		{
			list[index]=list1[i];index++;i++;
		}
		if(list2[j]<list1[i])
		{
			list[index]=list2[j];index++;j++;
		}
		if(list1[i]==list2[j])
		{
			ans[pivot]=list1[i];i++;j++;pivot++;
		}
		
	}
	if(i>=N1 && j<N2)      //appends remaining elements at end of list
	{
		while(j<N2)
		{
			list[index]=list2[j];index++;j++;
				
		}
		
	}
	
	if(j>=N2 && i<N1)
	{
		while(i<N1)
		{
			list[index]=list1[i];index++;i++;
		}
		
	}
/*	for(i=0;i<index;i++)
	   printf("\nlist is==%d\n",list[i]);
	for(i=0;i<pivot;i++)
	     printf("\n the ans =%d\n",ans[i]);
*/		    
	
	
	 for(i=0,j=0;i<index && j<N3;)
	 {
	 	if(list[i]<list3[j])    //compares elements of list[] with list3[]
	 	  {
	 	  	//zoomba[honey]=list[i];honey++;
			   i++;
	 	  }
	 	
	 	if(list3[j]<list[i])         //   it stores the common elements in ans2[] else just increment value of i and j 
	 	{                           // does not stores the elements which are present only in either list or list3
	 		//zoomba[honey]=list3[j];honey++;
			 j++;
	 	}
	 	
	 	if(list[i]==list3[j])                         //   if any lists exceed other ,,,does not check the exceeeding portion
 	 	{
	 		ans2[singh]=list[i];singh++;i++;j++;
	 	}
	 	
	 }	 
	/*for(i=0;i<singh;i++)
	    printf(" ans2 is %d\n",ans2[i]);
	*/
	for(i=0,j=0;i<pivot && j<singh;)
	{             // //////   merges ans[] and ans2[]     
		
		if(ans[i]<ans2[j])
		{
			ans3[eminem]=ans[i];eminem++;i++;
			
			
		}
		if(ans2[j]<ans[i])
		{
			ans3[eminem]=ans2[j];eminem++;j++;
			
			
		}
		if(ans2[j]==ans[i])
		{
			ans3[eminem]=ans2[j];eminem++;i++;j++;
		}
	}
	
	if(i>=pivot && j<singh)
	{
		while(j<singh)
		{
			
			ans3[eminem]=ans2[j];eminem++;j++;
			
		}
	} 
	
	if(j>=singh && i<pivot)
	{
		while(i<pivot)
		{
			
			ans3[eminem]=ans[i];eminem++;i++;
			
		}
		
	}
	
	printf("%d\n",eminem);
	for(i=0;i<eminem;i++)
	{
		printf("%d\n",ans3[i]);
	}
	
}
