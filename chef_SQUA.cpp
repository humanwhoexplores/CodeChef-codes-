#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main()
{
    int t;
    t=1;
    while(t--)
    {
    vector<pii> v(2005);
    set<pii> s;
    set<pii> :: iterator it1,it2;
    int ans=4;
    int n,x,y,x1,y1,x2,y2;
    //cin>>n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        //cin>>x>>y;
        scanf("%d %d",&x,&y);
        v[i].first=x;
        v[i].second=y;
        s.insert(pii(2*x,2*y));
    }
    for(int i=0; i<n && ans>0; i++)
    {
        for(int j=i; j<n && ans>0; j++)
        {
            if(i==j)
                continue;
            x1=(v[i].first + v[j].first + v[j].second - v[i].second);
            y1=(v[i].second + v[j].second +v[i].first - v[j].first);
            x2=(v[i].first + v[j].first + v[i].second - v[j].second);
            y2=(v[i].second + v[j].second +v[j].first - v[i].first);
 
            it1=s.find(pii(x1,y1));
            it2=s.find(pii(x2,y2));
            if(it1!=s.end())
            {
                flag1=1;
            }
            else flag1=0;
            
            if(it2!=s.end())
            {
                flag2=1;
            }
            else flag2=0;
            
              if(flag1==1 && flag2==1)
			       temp1=0;
			    
				if(flag1==1 && flag2==0)
				   temp1=1;   
		 	    if(flag1==0 && flag2==1)
				   temp1=1;   
			      if(flag1==0 && flag2==0)
                        temp1=2;
			if(temp1<ans)
			  ans=temp1;
			  
            
            
        }
    }
    //cout<<ans/2<<endl;
    printf("%d",ans);
    }
    return 0;
}
