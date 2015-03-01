#include<iostream>
#include<stdio.h>
#include<set>
#include<algorithm>
#include<utility>
using namespace std;

set<pair<int,int> > s;
set<pair<int,int> >::iterator it;


struct MatchFirst
{
        MatchFirst(const int & number) : number(number) {}

        bool operator()(const pair<int,int>& val) 
		{
                return val.first == number;
        }

        const int & number;
        
};

/*struct MatchFirst
{        //  this is  the original functor i copied from stackoverflow
        MatchFirst(const string& realName) : realName(realName) {}

        bool operator()(const pair<string, string>& val) {
                return val.first == realName;
        }

        const string& realName;
};*/



int recursion(int n)
{   
        
  
   //    it = find_if(s.begin(), s.end(), MatchFirst(n));
     //      return it->second;
   it = find_if(s.begin(), s.end(), MatchFirst(n));
           return it->second;
   
   
     if(it==s.end())
    {
    
	int a,b,c,sum1,sum2=0;
	
	
	a=n/2;
	b=n/3;
	c=n/4;
	
	sum1=a+b+c;
	
	while(a>11 && b>11 &&c >11)
	{
	
	sum2=recursion(a)+recursion(b)+recursion(c);
	}
	if(sum1>=sum2)
	return sum1;
	else return sum2;
     
    }
}

int main()
{
	int N,ans;
	//cin>>N;
	 
	 
	while (scanf("%d", &N) != EOF )
	{
	   
	
	ans=recursion(N);
	
	
	if(ans>N)
	cout<<ans<<"\n";
	else cout<<N<<"\n";
	//cin>>N;
    }   

}

