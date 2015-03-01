#include<iostream>
//#include<stdio.h>
#include<string.h>

using namespace std;

int jewel[255],stones[255];

int main()
{
	int T,i,j,temp,count,length1,length2;
	char J[110],S[110];
	cin>>T;
	//fflush(stdin);
	while(T--)
	{   count=0;
	for(i=60;i<125;i++)
	   {
	   	 jewel[i]=0;
	   	 stones[i]=0;
	   	 
	   	 
	   }
	      cin>>J;
	     //gets(J);
		//scanf("%s",J);
		//fflush(stdin);
		//scanf("%s",S);
		//gets(S);
		//fflush(stdin);
		cin>>S;
		length1=strlen(J);length2=strlen(S);
		for(i=0;i<length1;i++)
		{
			temp=(int)J[i];
			jewel[temp]++;
			
		}
		
		for(i=0;i<length2;i++)
		{
			temp=(int)S[i];
			stones[temp]++;
				
		}
		
		for(i=65;i<=122;i++)
		{
			if(jewel[i]>0 && stones[i]>0 )
			     count++;
			
		}
		
		
		
		cout<<count<<"\n";
		
	}
	
	
}
