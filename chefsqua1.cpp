#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
struct node {
    int x;
    int y;
};
node a[2005];
bool compare(node a,node b) {
    return a.x<b.x?true:false;
}
bool compare1(node a,node b) {
    return a.y<b.y?true:false;
}
bool find(node a[],int low,int high,node val) {
    if(low>high) return false;
    if(low==high) {
        if(a[low].x==val.x&&a[low].y==val.y) return true;
        return false;
    }
    if(high==low+1) {
        if(a[low].x==val.x&&a[low].y==val.y) return true;
        if(a[high].x==val.x&&a[high].y==val.y) return true;
        return false;
    }
    int mid=low+(high-low)/2;
    if(a[mid].x==val.x&&a[mid].y==val.y) return true;
    if(a[mid].x>val.x) return find(a,low,mid-1,val);
    else if(a[mid].x==val.x&&a[mid].y>val.y) return find(a,low,mid-1,val);
    else return find(a,mid+1,high,val);
}
int main() {
    int flag1,flag2,ans,temp1;
    
    
        int n; ans=4; 
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
        sort(a,a+n,compare);
        for(int i=0;i<n;i++) {
            int j=i;
            while(i+1<n&&a[i+1].x==a[i].x) i++;
            sort(a+j,a+i+1,compare1);
        }
        for(int i=0;i<n-2 && ans>0;i++) {
            for(int j=i+1;j<n-1 && ans>0;j++) {
                int x1=a[i].x;
                int y1=a[i].y;
                int x2=a[j].x;
                int y2=a[j].y;
                int diff1=x2-x1;
                int diff2=y2-y1;
                node pt1;
                pt1.x=x1+diff2;
                pt1.y=y1-diff1;
                node pt2;
                pt2.x=x1-diff2;
                pt2.y=y1+diff1;
                node pt3;
                pt3.x=x2+diff2;
                pt3.y=y2-diff1;
                node pt4;
                pt4.x=x2-diff2;
                pt4.y=y2+diff1;
                int cnt=0;
                if((find(a,j+1,n-1,pt1)==true) &&(find(a,j+1,n-1,pt2)==true)) {
                    //cnt++;
                    /*if(cnt==2) {
                        cout<<0<<endl;
                        ans++;
                    }*/
                  flag1=1;
				}
				else flag1=0;
                /*if(find(a,j+1,n-1,pt2)==true) {
                    cnt++;
                    if(cnt==2) {
                        cout<<0<<endl;
                        ans++;
                    }
                }*/
                if((find(a,j+1,n-1,pt3)==true) &&(find(a,j+1,n-1,pt4)==true)) {
                    /*cnt++;
                    if(cnt==2) {
                        ans++;
                    }*/
                    flag2=1;
                }
                else flag2=0;
                /*if(find(a,j+1,n-1,pt4)==true) {
                    cnt++;
                    if(cnt==2) {
                        ans++;
                    }
                }*/
            
			   
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
        cout<<ans<<endl;
    
    return 0;
}
 
