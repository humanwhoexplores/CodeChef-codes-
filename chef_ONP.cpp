#include<stdio.h>

using namespace std;

int main()
{
	
	char exp[405],stack[405],ans[405];
	int T,i,j,g,top=-1,start=-1;
	
	scanf("%d",&T);
	for(g=0;g<T;g++)
	{  top=-1;start=-1;
		
		scanf("%s",exp);
		
		
		
		for(j=0;exp[j]!='\0';j++)
		{  
			if(exp[j]=='(' || exp[j]=='+' || exp[j]=='-' || exp[j]=='*' || exp[j]=='/')
			{
				top+=1;
				stack[top]=exp[j];
				
			}
			else
			if(exp[j]==')')
			{
				while(stack[top]!='(')
				{   start+=1;
					ans[start]=stack[top];
					top--;
				}
				if(stack[top]=='(')
				{
					top--;
				}
		    }
			 else
			 {
			 	start+=1;
			 	ans[start]=exp[j];
			 }	
				
				
		
		}
		
		printf("%s\n",ans);
		//puts(ans);
	}
	
	
	
}
