#include<iostream>
using namespace std;
int main(){
	unsigned int arr[100001];
	unsigned int t, n, max, c1=0;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		c1=0;
		max=0;
		int ele;
		for(int i=0;i<n;i++){
			c1=0;
			for(int j=0;j<n;j++){
				if(arr[i]==arr[j])
					c1++;
			}
			if(max<c1){
				ele=arr[i];
				max=c1;
			}
			else if(max==c1){
				if(ele>arr[i])
					ele=arr[i];	
			}
		}
		cout<<ele<<" "<<max<<endl;
	}
	return 0;
} 
