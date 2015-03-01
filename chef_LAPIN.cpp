#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<iostream>
using namespace std;
int count[30],count2[30];
int main()
{
	char array[1050];
	int T,i,j,z,counter=0;
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{   
		cin>>array;
		
		for(i=0;i<strlen(array)/2;i++)
		{
			if((int)array[i]==97)
			count[1]+=1;
			
			if((int)array[i]==98)
			count[2]+=1;
			
			if((int)array[i]==99)
			count[3]+=1;
			
			if((int)array[i]==100)
			count[4]+=1;
		     
		     if((int)array[i]==101)
			count[5]+=1;
			
			if((int)array[i]==102)
			count[6]+=1;
			
			if((int)array[i]==103)
			count[7]+=1;
			
			if((int)array[i]==104)
			count[8]+=1;
			
			if((int)array[i]==105)
			count[9]+=1;
			
			if((int)array[i]==106)
			count[10]+=1;
			
			if((int)array[i]==107)
			count[11]+=1;
			
			if((int)array[i]==108)
			count[12]+=1;
			
			if((int)array[i]==109)
			count[13]+=1;
			
			if((int)array[i]==110)
			count[14]+=1;
			
			if((int)array[i]==111)
			count[15]+=1;
			
			if((int)array[i]==112)
			count[16]+=1;
			
			if((int)array[i]==113)
			count[17]+=1;
			
			if((int)array[i]==114)
			count[18]+=1;
			
			if((int)array[i]==115)
			count[19]+=1;
			
			if((int)array[i]==116)
			count[20]+=1;
			
			if((int)array[i]==117)
			count[21]+=1;
			
			if((int)array[i]==118)
			count[22]+=1;
			
			if((int)array[i]==119)
			count[23]+=1;
			
			if((int)array[i]==120)
			count[24]+=1;
			
			if((int)array[i]==121)
			count[25]+=1;
			
			if((int)array[i]==122)
			count[26]+=1;
		}
		int pivot;
		if(strlen(array)%2==0)
		pivot=strlen(array)/2;
		else
		pivot=(strlen(array)/2)+1;
		
		for(j=pivot;array[j]!='\0';j++)
		{
			
			
			if((int)array[i]==97)
			count2[1]+=1;
			
			if((int)array[i]==98)
			count2[2]+=1;
			
			if((int)array[i]==99)
			count2[3]+=1;
			
			if((int)array[i]==100)
			count2[4]+=1;
		     
		     if((int)array[i]==101)
			count2[5]+=1;
			
			if((int)array[i]==102)
			count2[6]+=1;
			
			if((int)array[i]==103)
			count2[7]+=1;
			
			if((int)array[i]==104)
			count2[8]+=1;
			
			if((int)array[i]==105)
			count2[9]+=1;
			
			if((int)array[i]==106)
			count2[10]+=1;
			
			if((int)array[i]==107)
			count2[11]+=1;
			
			if((int)array[i]==108)
			count2[12]+=1;
			
			if((int)array[i]==109)
			count2[13]+=1;
			
			if((int)array[i]==110)
			count2[14]+=1;
			
			if((int)array[i]==111)
			count2[15]+=1;
			
			if((int)array[i]==112)
			count2[16]+=1;
			
			if((int)array[i]==113)
			count2[17]+=1;
			
			if((int)array[i]==114)
			count2[18]+=1;
			
			if((int)array[i]==115)
			count2[19]+=1;
			
			if((int)array[i]==116)
			count2[20]+=1;
			
			if((int)array[i]==117)
			count2[21]+=1;
			
			if((int)array[i]==118)
			count2[22]+=1;
			
			if((int)array[i]==119)
			count2[23]+=1;
			
			if((int)array[i]==120)
			count2[24]+=1;
			
			if((int)array[i]==121)
			count2[25]+=1;
			
			if((int)array[i]==122)
			count2[26]+=1;
			
		}
		z=1;
		for(z=1;z<27;z++)
		{
			if(count[z]==count2[z])
			{
				counter++;
			}
			else
			if(count[z]!=count2[z])
			{
			printf("NO\n");
		    
			}
			
			
		}
		if(counter==26)
		{
		printf("YES\n");
	    }
	}
}
