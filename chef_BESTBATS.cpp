#include<stdio.h>

using namespace std;

int fac(int);
void sort(int *);
int main()
{
	int score[11],n,i,j,num,f,temp,ans,l_count=0,r_count=0,g,t_count,ret1,ret2,ret3;
	//printf("\n enter the number of test cases");
	scanf("%d",&n);
	for(j=0;j<n;j++)                //  n denotes the number of test cases
	{   l_count=0;
	    r_count=0;
		for(i=0;i<11;i++)
		{
			scanf("%d",&score[i]);
			
		}
		
	
	
	    sort(score);
	    //for(int a=0;a<11;a++)
	    //printf("%d",score[a]);

		//  num denotes number of players required..
		//printf("\n enter the number of players required");
		scanf("%d",&num);
		/*for(k=0;k<11;k++)
		{
		 integer=11;
		for(l=0;l<11;l++)
		{
			if(score[l]==integer)
			freq+=1;
			
		}
		count[k]=freq;
				
             integer--;	
	
        }
        for(k=0;k<11;k++)
        {
        	printf("%d",count[k]);
        }*/
        temp=score[num-1];
      //  printf("\n the k element");
       // printf("%d",temp);printf("\n");
        f=num-2;
        while(f>=0&&(score[f]==temp))
        {
        	l_count+=1;
        	f--;
        }
         
        g=num;
		while(g<11&&(score[g]==temp))
		{
			r_count+=1;
			g++;
		} 
        	
        t_count=l_count+r_count+1;
        	
        //printf("%d",t_count);
        ret1=fac(t_count);
        ret2=fac(1+l_count);
        ret3=fac(t_count-(1+l_count));
        //cout<<"\n ret1="<<ret1;
        //cout<<"\n ret2 ="<<ret2;
        //cout<<"\n ret3= "<<ret3;
        ans=(ret1/(ret2*ret3));
        printf("%d",ans);printf("\n");
    }
}
void sort(int *ar)
{
	int i,j,temp;
	for(i=0;i<11;i++)
	   {
	   	for(j=0;j<(11-1)-i;j++)
	   	{
	   		if(ar[j]<ar[j+1])
	   		{
	   			temp=ar[j];
	   			ar[j]=ar[j+1];
	   			ar[j+1]=temp;
	   		}
	   	}
	   	
	   }
}
int fac(int n)
{
	if(n<=1)
	return 1;
	else
	if(n>1)
	return n*fac(n-1);
}
