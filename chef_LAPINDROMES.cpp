#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
	 int T,i,temp,length,array1[26],array2[26],flag; char string[1000];
	 scanf("%d",&T);
	 while(T--)
	 {  flag=1; 
	 
	 for(i=0;i<26;i++)
	  {
	 array1[i]=0;array2[i]=0;
      }
	 	gets(string);cout<<"\n entered string========="<<string<<"\n";
	 	length=strlen(string);
	 	if(length%2==0)
	 	{
	 		for(i=0;i<length/2-1;i++)
	 		    {  temp=(int)string[i]-97;
	 		    cout<<"\n temp for first half=="<<temp;cout<<"\n array1[temp]++============"<<array1[temp]++;
	 		     }
	 		for(i=length/2;i<length;i++)
			    {   temp=(int)string[i]-97;
			    cout<<"\n tempfor second half==========="<<temp;cout<<"\n array2[temp]++======"<<array2[temp]++;
			    }
	 	}
	     if(length%2!=0)
		 {
		 	
		 	for(i=0;i<length/2;i++)
		 	{
		 		temp=array1[i]-97;array1[temp]++;
		 	}
		 	for(i=length/2+2;i<length;i++)
		 	{
		 		temp=array2[i]-97; array2[temp]++;
		 	}
		 	
		 }	
	 
	for(i=0;i<26;i++)
	{  cout<<"array1[i]======"<<array1[i]<<"\t"<<"array2[i]======="<<array2[i]<<"\n";
		if(array1[i]!=array2[i])
          {flag=-5;break;
          }    		  
	   
		
	}
	if(flag==1)
	cout<<"YES\n";
	else if (flag==-5)
	cout<<"NO\n";
}
}
